#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16216;
unsigned short var_2 = (unsigned short)33478;
unsigned long long int var_4 = 6103567938613521083ULL;
long long int var_6 = -7195479285317993950LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3457726023U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)49675;
int zero = 0;
unsigned long long int var_12 = 16983281819751429985ULL;
signed char var_13 = (signed char)44;
unsigned short var_14 = (unsigned short)12654;
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
