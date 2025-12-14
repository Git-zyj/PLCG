#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5782;
signed char var_1 = (signed char)41;
long long int var_4 = 6175131667927785735LL;
long long int var_5 = 5628121968007768067LL;
int var_6 = 2095273074;
int var_9 = -1062314165;
unsigned int var_10 = 3730661777U;
int zero = 0;
unsigned int var_12 = 1281822483U;
unsigned int var_13 = 3459936084U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
