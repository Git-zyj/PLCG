#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -552803440;
long long int var_4 = -5748283688779595074LL;
unsigned int var_8 = 443590319U;
int zero = 0;
unsigned long long int var_12 = 11105022837867411843ULL;
int var_13 = -1664830069;
unsigned char var_14 = (unsigned char)85;
unsigned int var_15 = 3780581667U;
unsigned char var_16 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
