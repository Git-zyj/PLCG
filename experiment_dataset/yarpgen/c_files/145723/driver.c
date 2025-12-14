#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7361765469552978745LL;
unsigned short var_3 = (unsigned short)48027;
unsigned short var_7 = (unsigned short)55506;
int zero = 0;
unsigned long long int var_10 = 15640474446301903254ULL;
int var_11 = -1588184496;
unsigned long long int var_12 = 7006102786619619687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
