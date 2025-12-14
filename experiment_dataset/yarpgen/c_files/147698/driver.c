#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22484;
short var_4 = (short)-19405;
signed char var_5 = (signed char)17;
long long int var_15 = 2355766120425915917LL;
short var_16 = (short)-26399;
int zero = 0;
int var_18 = -1863019978;
unsigned long long int var_19 = 13183528881244916311ULL;
unsigned short var_20 = (unsigned short)47321;
unsigned long long int var_21 = 13025844333039605781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
