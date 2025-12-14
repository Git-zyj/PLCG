#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14455;
int var_1 = 1706768163;
unsigned short var_3 = (unsigned short)56318;
int var_4 = -1040486386;
short var_5 = (short)28723;
unsigned short var_9 = (unsigned short)45890;
short var_10 = (short)13934;
int var_12 = 180442149;
short var_13 = (short)-26326;
int var_14 = -1135519893;
int zero = 0;
unsigned short var_15 = (unsigned short)5227;
int var_16 = 2980401;
unsigned short var_17 = (unsigned short)47375;
unsigned short var_18 = (unsigned short)40136;
int var_19 = -1616448697;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
