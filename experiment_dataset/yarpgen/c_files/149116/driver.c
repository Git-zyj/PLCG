#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-60;
unsigned short var_4 = (unsigned short)29513;
unsigned short var_6 = (unsigned short)62479;
long long int var_8 = 4334210815750390267LL;
int var_9 = 1786822439;
short var_12 = (short)-11652;
unsigned short var_13 = (unsigned short)42088;
unsigned long long int var_14 = 7038657550464410004ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
signed char var_18 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
