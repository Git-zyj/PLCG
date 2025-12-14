#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1511883525788614947ULL;
unsigned int var_4 = 2570416554U;
unsigned int var_5 = 3078458619U;
unsigned int var_10 = 2436319218U;
short var_11 = (short)7823;
int zero = 0;
unsigned char var_13 = (unsigned char)3;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)53;
void init() {
}

void checksum() {
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
