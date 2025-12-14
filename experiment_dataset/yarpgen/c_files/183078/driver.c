#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7161622132037063818ULL;
unsigned short var_3 = (unsigned short)12166;
unsigned char var_10 = (unsigned char)99;
int var_12 = 1317393799;
int zero = 0;
unsigned short var_20 = (unsigned short)64130;
int var_21 = 316676692;
void init() {
}

void checksum() {
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
