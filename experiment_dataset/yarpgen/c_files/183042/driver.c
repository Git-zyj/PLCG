#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23049;
signed char var_1 = (signed char)-16;
signed char var_2 = (signed char)19;
signed char var_5 = (signed char)-45;
short var_7 = (short)-3649;
unsigned int var_8 = 2074218927U;
_Bool var_10 = (_Bool)0;
int var_12 = -1095037833;
short var_13 = (short)1198;
unsigned short var_14 = (unsigned short)38526;
long long int var_15 = -7034733822989902710LL;
unsigned char var_16 = (unsigned char)53;
signed char var_17 = (signed char)-114;
long long int var_18 = 7313866914468757005LL;
int zero = 0;
signed char var_20 = (signed char)-7;
unsigned int var_21 = 90325119U;
long long int var_22 = -2979683702690771645LL;
void init() {
}

void checksum() {
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
