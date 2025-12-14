#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3931;
int var_2 = 1390032038;
int var_5 = 562840636;
unsigned char var_12 = (unsigned char)15;
unsigned int var_13 = 2407368970U;
unsigned short var_16 = (unsigned short)10894;
unsigned long long int var_17 = 8619550535906906574ULL;
int zero = 0;
unsigned long long int var_20 = 2111466765838625477ULL;
unsigned char var_21 = (unsigned char)51;
long long int var_22 = -6161918377745877597LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
