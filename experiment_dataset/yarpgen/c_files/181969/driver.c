#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4194435989U;
unsigned int var_2 = 3449668144U;
int var_3 = 56825802;
unsigned long long int var_7 = 4879493879992047526ULL;
signed char var_10 = (signed char)119;
unsigned char var_11 = (unsigned char)191;
long long int var_12 = -7499975815614214040LL;
int zero = 0;
int var_13 = -113320760;
unsigned int var_14 = 3267206260U;
unsigned long long int var_15 = 10704152989692791705ULL;
int var_16 = 1594049638;
signed char var_17 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
