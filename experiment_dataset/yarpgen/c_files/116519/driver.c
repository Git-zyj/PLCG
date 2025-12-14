#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14427;
unsigned short var_2 = (unsigned short)13913;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3592305833U;
unsigned char var_5 = (unsigned char)63;
unsigned short var_6 = (unsigned short)8365;
unsigned char var_8 = (unsigned char)181;
int var_9 = -1223866646;
unsigned short var_11 = (unsigned short)50653;
signed char var_13 = (signed char)-43;
unsigned short var_14 = (unsigned short)55785;
int zero = 0;
unsigned long long int var_15 = 15191489452835671235ULL;
unsigned int var_16 = 1513400690U;
long long int var_17 = -7357295551541576499LL;
signed char var_18 = (signed char)-97;
void init() {
}

void checksum() {
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
