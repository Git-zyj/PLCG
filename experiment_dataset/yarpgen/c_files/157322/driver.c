#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3783475555U;
unsigned long long int var_10 = 12518813593870196684ULL;
unsigned short var_13 = (unsigned short)47921;
unsigned int var_16 = 2563824545U;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 353494575;
int var_21 = -1299372627;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
