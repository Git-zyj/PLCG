#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
short var_2 = (short)-23620;
unsigned int var_5 = 4021989920U;
long long int var_10 = -6536973683178616459LL;
unsigned short var_16 = (unsigned short)41384;
unsigned int var_17 = 265261549U;
int zero = 0;
long long int var_19 = 7288993507281549421LL;
short var_20 = (short)-18556;
int var_21 = -1396168048;
void init() {
}

void checksum() {
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
