#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1650;
long long int var_3 = -5019687053418445462LL;
unsigned char var_4 = (unsigned char)209;
unsigned long long int var_6 = 11318312815196418129ULL;
int var_7 = 495310447;
unsigned int var_8 = 1123697424U;
short var_9 = (short)18941;
int var_13 = 258053970;
unsigned int var_14 = 1572144048U;
long long int var_15 = 4420170184633747604LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)64;
long long int var_20 = -1628471766970606235LL;
unsigned char var_21 = (unsigned char)248;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
