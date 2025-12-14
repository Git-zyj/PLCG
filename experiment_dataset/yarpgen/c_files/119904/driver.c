#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8440183692133209215ULL;
unsigned long long int var_6 = 15840435587798318235ULL;
short var_7 = (short)12319;
unsigned long long int var_9 = 13306838039949970685ULL;
unsigned short var_10 = (unsigned short)2872;
int zero = 0;
unsigned char var_13 = (unsigned char)5;
unsigned short var_14 = (unsigned short)21257;
unsigned char var_15 = (unsigned char)160;
unsigned short var_16 = (unsigned short)29054;
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
