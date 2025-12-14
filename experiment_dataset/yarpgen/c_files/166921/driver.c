#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9566505355122573806ULL;
unsigned long long int var_9 = 1420034385514516508ULL;
unsigned char var_12 = (unsigned char)24;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
unsigned char var_15 = (unsigned char)156;
signed char var_16 = (signed char)70;
signed char var_17 = (signed char)112;
unsigned char var_18 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
