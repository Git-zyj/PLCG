#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14686;
int var_1 = -359728035;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)55355;
signed char var_9 = (signed char)-31;
unsigned long long int var_10 = 5001255086158703671ULL;
unsigned int var_11 = 1928249960U;
int var_12 = 970452649;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
short var_20 = (short)-26178;
short var_21 = (short)11200;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
