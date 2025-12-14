#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1894976574U;
unsigned short var_4 = (unsigned short)17191;
long long int var_5 = 2152164267271384831LL;
int var_8 = 543041104;
int zero = 0;
unsigned short var_11 = (unsigned short)14878;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2791134585U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
