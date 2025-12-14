#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61211;
signed char var_7 = (signed char)-75;
signed char var_9 = (signed char)-34;
unsigned int var_10 = 4051544881U;
unsigned short var_11 = (unsigned short)38927;
int var_14 = 1448891694;
signed char var_16 = (signed char)-100;
int zero = 0;
unsigned char var_17 = (unsigned char)115;
unsigned int var_18 = 4211737899U;
int var_19 = 1115955073;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
