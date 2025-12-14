#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1460757749;
unsigned char var_2 = (unsigned char)30;
unsigned char var_3 = (unsigned char)36;
short var_7 = (short)-8539;
unsigned char var_8 = (unsigned char)165;
unsigned char var_11 = (unsigned char)54;
int var_14 = 433131475;
int var_17 = 221860845;
int zero = 0;
short var_19 = (short)31872;
signed char var_20 = (signed char)63;
long long int var_21 = 2362803768275407057LL;
unsigned char var_22 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
