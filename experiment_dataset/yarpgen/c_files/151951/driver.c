#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8882500645436234381ULL;
signed char var_3 = (signed char)83;
int var_5 = -418297569;
unsigned char var_9 = (unsigned char)127;
int var_10 = -811883039;
signed char var_11 = (signed char)58;
int zero = 0;
unsigned int var_12 = 3923020361U;
unsigned short var_13 = (unsigned short)30227;
unsigned short var_14 = (unsigned short)55008;
unsigned char var_15 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
