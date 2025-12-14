#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5671;
int var_6 = -1244046834;
int var_9 = -1219128739;
long long int var_10 = -3075021077692821084LL;
unsigned short var_12 = (unsigned short)41393;
signed char var_13 = (signed char)-59;
unsigned char var_14 = (unsigned char)63;
int zero = 0;
signed char var_16 = (signed char)-1;
unsigned char var_17 = (unsigned char)41;
unsigned short var_18 = (unsigned short)43131;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
