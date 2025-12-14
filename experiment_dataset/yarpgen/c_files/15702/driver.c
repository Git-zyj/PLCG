#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -474997081;
unsigned int var_3 = 3056702792U;
unsigned long long int var_5 = 6928509365421392402ULL;
int zero = 0;
unsigned long long int var_12 = 11398083147410778854ULL;
unsigned short var_13 = (unsigned short)57964;
int var_14 = 1521101193;
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
