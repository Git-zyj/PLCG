#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4619;
int var_4 = -2063142038;
unsigned long long int var_6 = 13296541764738602243ULL;
signed char var_8 = (signed char)83;
signed char var_11 = (signed char)45;
unsigned char var_12 = (unsigned char)181;
int zero = 0;
unsigned int var_13 = 2045843635U;
int var_14 = -628565483;
short var_15 = (short)22436;
unsigned short var_16 = (unsigned short)28732;
unsigned long long int var_17 = 9791029667765700142ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
