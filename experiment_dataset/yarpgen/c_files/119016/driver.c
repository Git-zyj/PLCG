#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 483488212;
long long int var_4 = -1319365695625430987LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)58143;
int zero = 0;
long long int var_11 = 2984055585611699165LL;
long long int var_12 = -3999924727102878226LL;
int var_13 = 1657889071;
long long int var_14 = -5376650915579173251LL;
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
