#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned char var_5 = (unsigned char)231;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_9 = 17744644690819333805ULL;
unsigned char var_11 = (unsigned char)166;
int zero = 0;
int var_15 = 1019540155;
unsigned char var_16 = (unsigned char)73;
signed char var_17 = (signed char)-62;
int var_18 = 1954401094;
unsigned long long int var_19 = 12115027905706153511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
