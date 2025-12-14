#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4499798542097528331LL;
unsigned char var_3 = (unsigned char)27;
signed char var_6 = (signed char)0;
int var_7 = -328101995;
int zero = 0;
unsigned char var_14 = (unsigned char)41;
signed char var_15 = (signed char)-52;
long long int var_16 = -4124404564698446562LL;
short var_17 = (short)1053;
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
