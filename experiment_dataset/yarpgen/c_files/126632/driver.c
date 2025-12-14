#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18674;
long long int var_2 = -8135706629204455901LL;
signed char var_4 = (signed char)-74;
short var_7 = (short)4659;
unsigned short var_12 = (unsigned short)13601;
int zero = 0;
int var_13 = -1415884811;
long long int var_14 = 6360689245611179194LL;
void init() {
}

void checksum() {
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
