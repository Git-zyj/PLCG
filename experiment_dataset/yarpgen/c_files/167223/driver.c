#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18596;
unsigned short var_5 = (unsigned short)63990;
unsigned char var_9 = (unsigned char)14;
signed char var_10 = (signed char)29;
int var_12 = -471010341;
long long int var_13 = -2198858158205223588LL;
int zero = 0;
unsigned short var_18 = (unsigned short)3827;
unsigned char var_19 = (unsigned char)5;
unsigned int var_20 = 1203094325U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
