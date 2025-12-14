#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
unsigned short var_4 = (unsigned short)15464;
unsigned long long int var_9 = 1535094681850738965ULL;
short var_10 = (short)14275;
short var_11 = (short)-21035;
unsigned int var_13 = 4232917449U;
unsigned int var_15 = 2532459262U;
int zero = 0;
int var_16 = -24792888;
signed char var_17 = (signed char)-20;
void init() {
}

void checksum() {
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
