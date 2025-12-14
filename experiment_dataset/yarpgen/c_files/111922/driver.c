#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
short var_1 = (short)21497;
unsigned short var_2 = (unsigned short)14290;
unsigned char var_7 = (unsigned char)74;
unsigned long long int var_12 = 9999698783903967746ULL;
unsigned int var_13 = 1611091186U;
int zero = 0;
signed char var_14 = (signed char)28;
unsigned long long int var_15 = 9012838812678744558ULL;
signed char var_16 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
