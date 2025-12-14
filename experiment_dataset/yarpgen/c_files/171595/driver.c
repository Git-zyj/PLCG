#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1161130745331156378ULL;
signed char var_3 = (signed char)36;
unsigned short var_7 = (unsigned short)44321;
int zero = 0;
int var_11 = -2055062295;
int var_12 = -1963166612;
unsigned short var_13 = (unsigned short)10361;
unsigned short var_14 = (unsigned short)23974;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
