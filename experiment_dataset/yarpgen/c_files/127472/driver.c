#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50414;
signed char var_3 = (signed char)-110;
unsigned short var_6 = (unsigned short)8314;
unsigned int var_10 = 2435001692U;
unsigned short var_13 = (unsigned short)13388;
int var_17 = 1085199728;
signed char var_18 = (signed char)-106;
int zero = 0;
unsigned int var_19 = 2524789508U;
int var_20 = 226222026;
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
