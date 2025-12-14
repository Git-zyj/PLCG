#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)56421;
unsigned long long int var_3 = 11729592223591079055ULL;
unsigned int var_6 = 2999912073U;
short var_7 = (short)8493;
short var_8 = (short)17431;
short var_10 = (short)-22664;
short var_11 = (short)-8485;
unsigned short var_12 = (unsigned short)16252;
unsigned int var_14 = 2719169285U;
unsigned short var_15 = (unsigned short)64071;
unsigned int var_16 = 3467705749U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4111350835U;
unsigned char var_19 = (unsigned char)47;
long long int var_20 = 7754065371185838193LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
