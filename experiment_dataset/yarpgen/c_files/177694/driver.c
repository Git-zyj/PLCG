#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15873;
unsigned short var_1 = (unsigned short)58777;
short var_2 = (short)-475;
long long int var_3 = 487907622311354814LL;
unsigned short var_5 = (unsigned short)25495;
short var_6 = (short)-1406;
unsigned short var_7 = (unsigned short)20127;
unsigned short var_8 = (unsigned short)10515;
short var_11 = (short)842;
int zero = 0;
short var_13 = (short)13399;
short var_14 = (short)-17991;
unsigned short var_15 = (unsigned short)4721;
unsigned short var_16 = (unsigned short)37436;
short var_17 = (short)-22451;
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
