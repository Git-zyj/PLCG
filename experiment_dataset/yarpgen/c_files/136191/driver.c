#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5311;
signed char var_2 = (signed char)14;
signed char var_3 = (signed char)-83;
int var_4 = -1725796888;
unsigned char var_6 = (unsigned char)6;
int zero = 0;
signed char var_12 = (signed char)36;
unsigned long long int var_13 = 6020375531023132551ULL;
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
