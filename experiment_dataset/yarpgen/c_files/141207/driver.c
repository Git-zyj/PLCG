#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1628884136;
int var_4 = 927456132;
unsigned char var_6 = (unsigned char)100;
short var_9 = (short)-6034;
unsigned short var_10 = (unsigned short)24926;
int zero = 0;
int var_11 = 1195530609;
unsigned short var_12 = (unsigned short)49480;
unsigned short var_13 = (unsigned short)9363;
int var_14 = -1389109536;
int var_15 = -1728784035;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
