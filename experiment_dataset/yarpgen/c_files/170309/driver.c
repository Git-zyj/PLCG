#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11125718348404055175ULL;
unsigned long long int var_7 = 1435646669462901925ULL;
signed char var_8 = (signed char)-97;
int zero = 0;
unsigned int var_18 = 4294136202U;
unsigned short var_19 = (unsigned short)21564;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
