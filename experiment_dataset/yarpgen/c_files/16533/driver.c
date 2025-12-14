#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -549510474;
short var_1 = (short)-32571;
long long int var_2 = 5226310320807710051LL;
unsigned long long int var_3 = 4759134593301791158ULL;
short var_4 = (short)-10153;
unsigned int var_5 = 4165813278U;
int var_6 = -22114157;
unsigned int var_7 = 293275216U;
short var_8 = (short)-12642;
int var_9 = -1860791343;
unsigned char var_10 = (unsigned char)193;
int zero = 0;
unsigned char var_11 = (unsigned char)239;
unsigned short var_12 = (unsigned short)25024;
unsigned char var_13 = (unsigned char)206;
short var_14 = (short)9954;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
