#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
signed char var_8 = (signed char)-22;
unsigned int var_9 = 2200221451U;
unsigned char var_12 = (unsigned char)117;
unsigned char var_13 = (unsigned char)73;
unsigned char var_17 = (unsigned char)77;
int zero = 0;
unsigned long long int var_20 = 14782734227849589047ULL;
unsigned long long int var_21 = 17072592884123907566ULL;
unsigned char var_22 = (unsigned char)89;
signed char var_23 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
