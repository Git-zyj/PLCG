#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51874;
unsigned char var_4 = (unsigned char)150;
unsigned int var_5 = 1449529023U;
unsigned short var_10 = (unsigned short)46941;
short var_11 = (short)-26464;
int var_16 = 880990118;
int zero = 0;
unsigned int var_17 = 3010696147U;
unsigned short var_18 = (unsigned short)5817;
unsigned int var_19 = 1485195130U;
unsigned int var_20 = 1672972563U;
long long int var_21 = 5929262286426752192LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
