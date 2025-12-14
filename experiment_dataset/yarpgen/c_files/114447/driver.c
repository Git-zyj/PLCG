#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
unsigned int var_2 = 570384955U;
long long int var_7 = -6965863712775679014LL;
unsigned short var_8 = (unsigned short)18267;
signed char var_9 = (signed char)27;
long long int var_10 = 4250737083743299936LL;
int var_11 = -1311328324;
int zero = 0;
long long int var_12 = -5996091629913180773LL;
unsigned int var_13 = 4203685047U;
unsigned short var_14 = (unsigned short)42920;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
