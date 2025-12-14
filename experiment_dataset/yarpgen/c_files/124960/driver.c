#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1942139383U;
unsigned long long int var_9 = 7268958987212857906ULL;
int zero = 0;
signed char var_12 = (signed char)124;
unsigned int var_13 = 4042492802U;
unsigned short var_14 = (unsigned short)7306;
unsigned char var_15 = (unsigned char)227;
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
