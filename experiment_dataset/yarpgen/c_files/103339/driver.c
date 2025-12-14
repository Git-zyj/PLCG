#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1099754295;
int var_7 = -1465718967;
unsigned long long int var_10 = 4833006378539958359ULL;
unsigned int var_11 = 538302169U;
short var_12 = (short)5890;
int zero = 0;
int var_13 = -2059157951;
unsigned int var_14 = 2401883124U;
short var_15 = (short)31484;
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
