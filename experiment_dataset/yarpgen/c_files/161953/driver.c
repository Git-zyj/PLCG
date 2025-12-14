#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3961120164U;
unsigned char var_7 = (unsigned char)200;
_Bool var_11 = (_Bool)1;
int var_12 = 1312780473;
unsigned long long int var_14 = 577588272528646492ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)27;
unsigned short var_19 = (unsigned short)21545;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
