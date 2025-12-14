#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9411603643493712018ULL;
unsigned long long int var_3 = 2824743480601166304ULL;
int var_4 = -1564198441;
unsigned short var_6 = (unsigned short)5011;
int var_7 = 1712558453;
short var_8 = (short)816;
unsigned long long int var_10 = 4303844551306659096ULL;
unsigned long long int var_13 = 14127598212328344596ULL;
short var_15 = (short)-12724;
int zero = 0;
short var_16 = (short)29830;
short var_17 = (short)1175;
unsigned long long int var_18 = 16176666192743447893ULL;
unsigned long long int var_19 = 7855606396664361771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
