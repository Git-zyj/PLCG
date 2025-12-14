#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2855782682U;
int var_3 = 1371550058;
unsigned int var_4 = 2489373843U;
unsigned char var_5 = (unsigned char)206;
signed char var_16 = (signed char)1;
signed char var_17 = (signed char)-98;
int zero = 0;
unsigned char var_19 = (unsigned char)79;
int var_20 = -500395194;
int var_21 = 754875181;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
