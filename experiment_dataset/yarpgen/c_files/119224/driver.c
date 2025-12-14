#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6014580158216314326ULL;
unsigned long long int var_1 = 15033755236604400924ULL;
unsigned long long int var_2 = 9407559327323638633ULL;
unsigned long long int var_9 = 15090329187704968558ULL;
unsigned long long int var_10 = 11496473168030555933ULL;
int zero = 0;
unsigned long long int var_12 = 1163316551502200065ULL;
unsigned long long int var_13 = 5484434578294227910ULL;
unsigned long long int var_14 = 2433158590113898599ULL;
void init() {
}

void checksum() {
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
