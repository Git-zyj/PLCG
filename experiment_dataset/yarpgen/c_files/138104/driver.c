#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37165;
unsigned int var_1 = 2461676290U;
unsigned short var_2 = (unsigned short)61263;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1246764399U;
unsigned long long int var_6 = 14457165017894435098ULL;
unsigned short var_7 = (unsigned short)43316;
unsigned short var_8 = (unsigned short)43331;
signed char var_9 = (signed char)47;
unsigned long long int var_10 = 17277657441161425638ULL;
short var_11 = (short)-8403;
int zero = 0;
unsigned short var_12 = (unsigned short)13763;
unsigned int var_13 = 1374450118U;
int var_14 = 1091936790;
unsigned int var_15 = 1978195105U;
int var_16 = 17031289;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
