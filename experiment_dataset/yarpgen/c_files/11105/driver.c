#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13732527267965864937ULL;
unsigned char var_2 = (unsigned char)249;
_Bool var_6 = (_Bool)0;
unsigned short var_15 = (unsigned short)50031;
int zero = 0;
int var_19 = 651703848;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)30403;
short var_22 = (short)15421;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
