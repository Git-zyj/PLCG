#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1763624267U;
unsigned char var_3 = (unsigned char)141;
unsigned int var_7 = 3302683868U;
unsigned long long int var_10 = 6594520338569671332ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2669768265786400241LL;
unsigned long long int var_15 = 4271753782953043320ULL;
int zero = 0;
signed char var_17 = (signed char)95;
unsigned int var_18 = 3738315544U;
void init() {
}

void checksum() {
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
