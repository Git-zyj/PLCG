#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1776331271353510018ULL;
int var_6 = -1159052686;
unsigned short var_7 = (unsigned short)10205;
unsigned int var_9 = 1432078662U;
short var_10 = (short)17368;
unsigned int var_17 = 3500246047U;
int var_18 = -952242717;
int zero = 0;
unsigned int var_19 = 3142731744U;
unsigned int var_20 = 1513186990U;
unsigned long long int var_21 = 13388864714061436966ULL;
void init() {
}

void checksum() {
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
