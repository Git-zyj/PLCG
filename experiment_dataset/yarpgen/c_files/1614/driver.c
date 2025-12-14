#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2752041325015214148LL;
unsigned long long int var_4 = 10457530470671568438ULL;
unsigned char var_6 = (unsigned char)176;
unsigned int var_12 = 2884740495U;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 2068866740;
unsigned char var_16 = (unsigned char)223;
void init() {
}

void checksum() {
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
