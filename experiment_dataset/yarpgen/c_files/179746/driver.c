#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3668370796U;
int var_1 = -972091339;
int var_2 = -1950258545;
unsigned long long int var_4 = 10674857042996177734ULL;
unsigned int var_5 = 3172378718U;
short var_6 = (short)-17762;
short var_7 = (short)6941;
long long int var_8 = -6842169217198295611LL;
int var_9 = 1337630122;
long long int var_10 = -1071307350218226316LL;
short var_11 = (short)2451;
unsigned short var_12 = (unsigned short)10085;
unsigned short var_13 = (unsigned short)2137;
int zero = 0;
signed char var_14 = (signed char)-80;
long long int var_15 = 4301582381787013985LL;
unsigned long long int var_16 = 6689992215572997383ULL;
short var_17 = (short)-31617;
long long int var_18 = -1549081618392738541LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
