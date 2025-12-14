#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1362659759589724324ULL;
unsigned int var_7 = 2600964531U;
unsigned char var_15 = (unsigned char)59;
signed char var_16 = (signed char)-13;
int zero = 0;
unsigned short var_18 = (unsigned short)2664;
unsigned int var_19 = 90853744U;
unsigned short var_20 = (unsigned short)8257;
unsigned int var_21 = 3085168232U;
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
