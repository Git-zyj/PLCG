#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 268560514U;
short var_6 = (short)26394;
unsigned long long int var_8 = 11990703625663228135ULL;
signed char var_9 = (signed char)-12;
long long int var_11 = 5422525876771642747LL;
int zero = 0;
unsigned int var_14 = 4210472691U;
short var_15 = (short)5779;
unsigned char var_16 = (unsigned char)0;
short var_17 = (short)21672;
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
