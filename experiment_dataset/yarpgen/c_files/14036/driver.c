#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
short var_3 = (short)13332;
int var_5 = 144575592;
unsigned long long int var_9 = 17223537844820940656ULL;
int zero = 0;
short var_10 = (short)-836;
short var_11 = (short)22548;
unsigned char var_12 = (unsigned char)16;
unsigned short var_13 = (unsigned short)30288;
signed char var_14 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
