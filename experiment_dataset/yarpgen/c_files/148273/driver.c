#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 377401486379665029ULL;
unsigned char var_4 = (unsigned char)59;
unsigned short var_5 = (unsigned short)12193;
unsigned long long int var_7 = 11771960554125589435ULL;
unsigned short var_8 = (unsigned short)36859;
short var_10 = (short)-15987;
int zero = 0;
unsigned short var_11 = (unsigned short)7887;
long long int var_12 = -6001357389278965353LL;
unsigned short var_13 = (unsigned short)48451;
unsigned short var_14 = (unsigned short)36437;
void init() {
}

void checksum() {
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
