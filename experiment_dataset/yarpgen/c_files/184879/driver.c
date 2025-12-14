#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)10972;
unsigned long long int var_10 = 4934888854540860540ULL;
int var_11 = 983220182;
unsigned int var_12 = 3631469488U;
int zero = 0;
int var_14 = 1450622836;
unsigned short var_15 = (unsigned short)55772;
signed char var_16 = (signed char)-101;
unsigned long long int var_17 = 8026380852023540607ULL;
void init() {
}

void checksum() {
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
