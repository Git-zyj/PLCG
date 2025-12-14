#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7637527315150623458LL;
int var_1 = 1906177794;
signed char var_2 = (signed char)-95;
unsigned long long int var_6 = 16551049469705254838ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3735641112U;
_Bool var_16 = (_Bool)1;
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
