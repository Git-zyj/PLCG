#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1388970460386519422LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17794808388064177766ULL;
int var_6 = -1117445223;
int var_8 = -1038407904;
signed char var_9 = (signed char)-8;
signed char var_11 = (signed char)-122;
int zero = 0;
signed char var_12 = (signed char)86;
long long int var_13 = -6764282647024635047LL;
short var_14 = (short)-23911;
unsigned short var_15 = (unsigned short)52744;
unsigned short var_16 = (unsigned short)6789;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
