#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
long long int var_5 = -2013578601624084457LL;
_Bool var_7 = (_Bool)0;
int var_8 = -1261604523;
unsigned char var_9 = (unsigned char)203;
int var_10 = -638201942;
int zero = 0;
long long int var_11 = -4188311938425628522LL;
short var_12 = (short)-10113;
long long int var_13 = 1520941657483308664LL;
unsigned char var_14 = (unsigned char)227;
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
