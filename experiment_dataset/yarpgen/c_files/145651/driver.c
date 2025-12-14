#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)14394;
long long int var_2 = -4241730601929476905LL;
int var_4 = 252902398;
short var_5 = (short)-22931;
long long int var_6 = 6691368808567205609LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)635;
short var_9 = (short)14141;
short var_10 = (short)1472;
int zero = 0;
signed char var_11 = (signed char)-90;
short var_12 = (short)-17241;
unsigned char var_13 = (unsigned char)190;
unsigned long long int var_14 = 17120211419678452194ULL;
unsigned char var_15 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
