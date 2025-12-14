#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14241969362431875930ULL;
long long int var_5 = 7406899464451575435LL;
long long int var_6 = -5603957099632054050LL;
signed char var_7 = (signed char)-81;
signed char var_10 = (signed char)-89;
unsigned int var_14 = 607028439U;
long long int var_15 = 2679768065413170602LL;
int var_16 = -1977173407;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
unsigned char var_20 = (unsigned char)156;
void init() {
}

void checksum() {
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
