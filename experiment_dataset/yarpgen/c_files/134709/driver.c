#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned long long int var_1 = 4357935434747997671ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 2050407608U;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)-107;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-87;
int var_14 = 1368426372;
int zero = 0;
int var_15 = -760904846;
short var_16 = (short)10410;
long long int var_17 = 3482951915193766071LL;
unsigned long long int var_18 = 13554610969823273407ULL;
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
