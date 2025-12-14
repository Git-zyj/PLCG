#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1724592678;
int var_2 = -1029673708;
unsigned short var_4 = (unsigned short)12811;
long long int var_5 = 1149338135564918550LL;
unsigned int var_6 = 88610911U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)9708;
unsigned short var_11 = (unsigned short)54512;
int zero = 0;
long long int var_12 = -5250699644606887440LL;
unsigned char var_13 = (unsigned char)37;
unsigned char var_14 = (unsigned char)157;
unsigned short var_15 = (unsigned short)62553;
void init() {
}

void checksum() {
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
