#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned long long int var_8 = 8208200050732375376ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 4345989976883481949ULL;
unsigned char var_17 = (unsigned char)166;
int zero = 0;
signed char var_18 = (signed char)120;
unsigned char var_19 = (unsigned char)215;
unsigned long long int var_20 = 16007717585503459542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
