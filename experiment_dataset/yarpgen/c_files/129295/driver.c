#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2015824211;
short var_2 = (short)21458;
int var_5 = -1237364127;
unsigned short var_10 = (unsigned short)4555;
int zero = 0;
unsigned long long int var_16 = 14998962046131408460ULL;
unsigned long long int var_17 = 1051998070394829984ULL;
unsigned short var_18 = (unsigned short)24159;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
