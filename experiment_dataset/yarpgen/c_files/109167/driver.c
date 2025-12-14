#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6088803630396396405ULL;
signed char var_11 = (signed char)-106;
int var_14 = 227740015;
int zero = 0;
unsigned long long int var_16 = 10262409011223661383ULL;
long long int var_17 = 9150488583097557255LL;
long long int var_18 = -7347686626174768628LL;
void init() {
}

void checksum() {
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
