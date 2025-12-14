#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)198;
unsigned long long int var_14 = 13501279023911896224ULL;
unsigned long long int var_18 = 12249977636400337941ULL;
int zero = 0;
int var_20 = -933170069;
signed char var_21 = (signed char)-97;
unsigned char var_22 = (unsigned char)160;
unsigned char var_23 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
