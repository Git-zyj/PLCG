#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18744;
unsigned int var_3 = 2223171650U;
long long int var_4 = -133837264934862578LL;
unsigned int var_6 = 1670450078U;
int var_7 = -561511710;
short var_8 = (short)18960;
unsigned char var_9 = (unsigned char)113;
int zero = 0;
int var_10 = -1935807853;
int var_11 = -1026314384;
unsigned char var_12 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
