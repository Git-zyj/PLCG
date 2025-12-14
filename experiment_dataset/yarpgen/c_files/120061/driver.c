#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned short var_3 = (unsigned short)16046;
int var_6 = 814765221;
unsigned short var_7 = (unsigned short)59837;
short var_9 = (short)-10558;
unsigned long long int var_12 = 11159795422102843940ULL;
signed char var_14 = (signed char)-8;
int zero = 0;
unsigned long long int var_15 = 9550178893378557907ULL;
unsigned long long int var_16 = 2484152842929266731ULL;
void init() {
}

void checksum() {
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
