#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7195917040430171412LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14839028670034383734ULL;
unsigned long long int var_3 = 15272666339263312619ULL;
unsigned long long int var_4 = 5377866672787351971ULL;
unsigned short var_5 = (unsigned short)31360;
unsigned char var_6 = (unsigned char)240;
int var_7 = -812303252;
unsigned long long int var_8 = 15294032350247486926ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -7803039152901179203LL;
unsigned int var_11 = 3944225639U;
short var_12 = (short)-12123;
unsigned int var_14 = 1134359873U;
unsigned long long int var_15 = 5232088172825763023ULL;
signed char var_16 = (signed char)50;
short var_17 = (short)-9049;
unsigned short var_18 = (unsigned short)21262;
int zero = 0;
signed char var_19 = (signed char)54;
short var_20 = (short)15964;
unsigned int var_21 = 3802308481U;
int var_22 = 271639123;
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
