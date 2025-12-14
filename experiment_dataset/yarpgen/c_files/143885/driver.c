#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31214;
int var_1 = -1409048501;
int var_2 = 1026979053;
unsigned short var_3 = (unsigned short)61781;
unsigned short var_6 = (unsigned short)27846;
long long int var_7 = -1382875082144765409LL;
int var_10 = 1147953756;
unsigned short var_12 = (unsigned short)49189;
int zero = 0;
unsigned short var_13 = (unsigned short)8525;
short var_14 = (short)-17585;
long long int var_15 = -9194878709377973492LL;
signed char var_16 = (signed char)-10;
int var_17 = -1930561374;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
