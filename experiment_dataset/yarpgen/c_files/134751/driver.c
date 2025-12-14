#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8432529879301397839LL;
long long int var_3 = -5732962551524324585LL;
signed char var_5 = (signed char)-104;
short var_6 = (short)7373;
signed char var_8 = (signed char)90;
unsigned long long int var_9 = 13883567271200702122ULL;
unsigned short var_10 = (unsigned short)26218;
long long int var_11 = -1053400490025943388LL;
unsigned short var_12 = (unsigned short)38262;
unsigned short var_15 = (unsigned short)37896;
short var_16 = (short)8985;
short var_17 = (short)-22565;
int zero = 0;
unsigned short var_18 = (unsigned short)18788;
unsigned short var_19 = (unsigned short)42882;
unsigned short var_20 = (unsigned short)16945;
unsigned short var_21 = (unsigned short)64291;
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
