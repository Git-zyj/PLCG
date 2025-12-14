#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
unsigned int var_2 = 4034374823U;
long long int var_4 = -8479111813398221705LL;
short var_5 = (short)28123;
long long int var_6 = 9093453800497684341LL;
signed char var_7 = (signed char)103;
short var_9 = (short)29883;
int var_11 = 718379687;
short var_12 = (short)2018;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
signed char var_15 = (signed char)-123;
unsigned char var_16 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
