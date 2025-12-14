#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1635053844;
signed char var_6 = (signed char)74;
unsigned long long int var_7 = 16356316352526830330ULL;
int var_9 = -1719141234;
unsigned long long int var_10 = 9289633701956603110ULL;
unsigned short var_14 = (unsigned short)48433;
short var_17 = (short)4300;
unsigned short var_18 = (unsigned short)43131;
unsigned short var_19 = (unsigned short)59650;
int zero = 0;
unsigned short var_20 = (unsigned short)20952;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
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
