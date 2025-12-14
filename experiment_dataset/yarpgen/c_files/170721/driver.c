#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1087585612;
signed char var_1 = (signed char)-72;
signed char var_10 = (signed char)37;
unsigned char var_13 = (unsigned char)81;
unsigned short var_16 = (unsigned short)46637;
signed char var_17 = (signed char)5;
int zero = 0;
unsigned int var_18 = 784581148U;
unsigned long long int var_19 = 918110234701523331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
