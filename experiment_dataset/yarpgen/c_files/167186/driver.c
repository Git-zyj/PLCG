#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
long long int var_1 = -6959141737295172658LL;
unsigned int var_3 = 700040583U;
unsigned short var_4 = (unsigned short)44548;
unsigned int var_5 = 1261309466U;
signed char var_6 = (signed char)65;
unsigned char var_9 = (unsigned char)182;
unsigned int var_10 = 2692848405U;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
int var_13 = 1947448576;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
