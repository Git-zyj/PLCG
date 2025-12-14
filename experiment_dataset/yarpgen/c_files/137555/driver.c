#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7475;
signed char var_2 = (signed char)-93;
unsigned char var_3 = (unsigned char)198;
signed char var_5 = (signed char)116;
long long int var_6 = 8828067265417975912LL;
unsigned short var_8 = (unsigned short)12231;
long long int var_11 = 1075911977657618788LL;
unsigned short var_12 = (unsigned short)37272;
unsigned char var_15 = (unsigned char)65;
long long int var_17 = 8436714426805275941LL;
int zero = 0;
int var_18 = 515825851;
unsigned short var_19 = (unsigned short)53136;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
