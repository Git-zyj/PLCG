#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)203;
long long int var_8 = 1557881819920008727LL;
unsigned short var_9 = (unsigned short)3173;
unsigned long long int var_11 = 4540208888605697099ULL;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
long long int var_15 = -3104603618180765294LL;
signed char var_16 = (signed char)94;
unsigned int var_17 = 2406929591U;
unsigned char var_18 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
