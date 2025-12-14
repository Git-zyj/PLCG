#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15465596682446180206ULL;
unsigned int var_2 = 2680156495U;
unsigned int var_3 = 2213857708U;
int var_6 = -60096742;
unsigned long long int var_7 = 6894289680446633464ULL;
unsigned char var_8 = (unsigned char)101;
int zero = 0;
unsigned int var_12 = 3969066922U;
unsigned short var_13 = (unsigned short)20891;
unsigned int var_14 = 2268112456U;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
