#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7484;
unsigned long long int var_1 = 855695624317139447ULL;
unsigned int var_6 = 3217792204U;
unsigned char var_8 = (unsigned char)66;
long long int var_9 = -2591810638449315237LL;
unsigned char var_10 = (unsigned char)162;
int zero = 0;
unsigned char var_14 = (unsigned char)202;
unsigned long long int var_15 = 11264527757770204323ULL;
short var_16 = (short)26942;
unsigned int var_17 = 123238808U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
