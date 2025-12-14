#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned int var_3 = 2330185705U;
unsigned char var_6 = (unsigned char)59;
int var_8 = 1695851142;
unsigned char var_10 = (unsigned char)178;
signed char var_11 = (signed char)-114;
unsigned long long int var_12 = 9547104024219883379ULL;
unsigned long long int var_13 = 5562183796976198777ULL;
int zero = 0;
signed char var_16 = (signed char)33;
signed char var_17 = (signed char)14;
unsigned char var_18 = (unsigned char)133;
int var_19 = 613216030;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
