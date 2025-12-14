#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 955752580;
unsigned short var_1 = (unsigned short)60274;
int var_2 = 1405710354;
int var_3 = -410411681;
unsigned int var_5 = 486024737U;
short var_6 = (short)2140;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13327626736526214217ULL;
unsigned long long int var_11 = 10744716712713914042ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15139106523256921066ULL;
int var_15 = 2030305384;
short var_16 = (short)12564;
void init() {
}

void checksum() {
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
