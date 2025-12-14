#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32111;
unsigned long long int var_2 = 6015496361942128331ULL;
unsigned short var_7 = (unsigned short)51147;
int zero = 0;
unsigned short var_14 = (unsigned short)50084;
int var_15 = -403497149;
void init() {
}

void checksum() {
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
