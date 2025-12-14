#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17466;
int var_1 = 155900811;
signed char var_2 = (signed char)-29;
signed char var_4 = (signed char)-66;
unsigned int var_5 = 749544857U;
unsigned short var_10 = (unsigned short)46797;
signed char var_12 = (signed char)39;
long long int var_13 = -524894616592372494LL;
int zero = 0;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
