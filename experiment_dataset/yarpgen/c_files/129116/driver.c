#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned char var_3 = (unsigned char)81;
signed char var_4 = (signed char)127;
signed char var_5 = (signed char)-122;
unsigned char var_10 = (unsigned char)166;
long long int var_16 = -8168188752396735595LL;
unsigned int var_18 = 1880569729U;
int zero = 0;
unsigned int var_19 = 3904814708U;
unsigned long long int var_20 = 9798689299432143989ULL;
unsigned char var_21 = (unsigned char)100;
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
