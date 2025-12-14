#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 462193215815532201LL;
signed char var_3 = (signed char)-83;
unsigned char var_4 = (unsigned char)30;
unsigned int var_5 = 3269904713U;
int zero = 0;
unsigned short var_10 = (unsigned short)15299;
unsigned char var_11 = (unsigned char)195;
unsigned char var_12 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
