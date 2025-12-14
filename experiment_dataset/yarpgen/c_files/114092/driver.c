#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9323107134221022775ULL;
unsigned int var_3 = 1157035249U;
short var_13 = (short)-26919;
short var_14 = (short)5180;
int zero = 0;
unsigned short var_15 = (unsigned short)11590;
int var_16 = 2080536542;
unsigned char var_17 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
