#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -601312812809065840LL;
unsigned short var_5 = (unsigned short)7391;
int var_8 = 1945022820;
unsigned short var_10 = (unsigned short)42747;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)32236;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)65372;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
