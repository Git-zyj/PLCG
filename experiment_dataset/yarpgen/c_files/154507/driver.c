#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41165;
unsigned short var_1 = (unsigned short)7804;
unsigned char var_3 = (unsigned char)175;
signed char var_6 = (signed char)54;
short var_7 = (short)-21317;
unsigned long long int var_8 = 15339259773175011609ULL;
unsigned short var_9 = (unsigned short)44190;
int zero = 0;
unsigned char var_18 = (unsigned char)132;
short var_19 = (short)20921;
unsigned int var_20 = 612418194U;
unsigned short var_21 = (unsigned short)62411;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
