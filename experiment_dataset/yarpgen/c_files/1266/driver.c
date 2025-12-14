#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18132;
short var_8 = (short)-8686;
unsigned int var_10 = 736913329U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)22723;
unsigned char var_14 = (unsigned char)251;
unsigned short var_15 = (unsigned short)57156;
unsigned short var_16 = (unsigned short)17691;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
