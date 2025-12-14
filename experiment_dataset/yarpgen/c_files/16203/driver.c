#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7905;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1313439692894784739LL;
unsigned int var_6 = 561766046U;
unsigned short var_7 = (unsigned short)42097;
unsigned short var_8 = (unsigned short)47048;
int var_9 = 325799564;
int var_12 = 644715469;
unsigned char var_13 = (unsigned char)56;
int zero = 0;
unsigned int var_14 = 1777829929U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)28301;
short var_17 = (short)-21290;
short var_18 = (short)-26538;
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
