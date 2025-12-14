#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -139657596117906008LL;
signed char var_2 = (signed char)-89;
short var_5 = (short)-22765;
unsigned char var_9 = (unsigned char)106;
signed char var_12 = (signed char)52;
unsigned int var_13 = 1095109460U;
unsigned int var_14 = 1790661015U;
unsigned int var_19 = 1061902787U;
int zero = 0;
signed char var_20 = (signed char)-49;
unsigned char var_21 = (unsigned char)251;
unsigned char var_22 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
