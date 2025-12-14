#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 593840891U;
int var_7 = 834236901;
unsigned char var_8 = (unsigned char)205;
unsigned long long int var_13 = 3410663231473778963ULL;
int zero = 0;
unsigned int var_17 = 23487424U;
unsigned int var_18 = 3611228088U;
void init() {
}

void checksum() {
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
