#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3903573826U;
short var_3 = (short)-26052;
unsigned long long int var_5 = 6222543819517644070ULL;
unsigned int var_8 = 3375938868U;
int zero = 0;
int var_10 = -1627331509;
int var_11 = -1056736194;
long long int var_12 = 6934102378592908455LL;
unsigned short var_13 = (unsigned short)29968;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
