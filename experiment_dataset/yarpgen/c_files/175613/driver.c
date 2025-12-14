#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2858056689088469579LL;
short var_4 = (short)27469;
unsigned short var_5 = (unsigned short)10707;
_Bool var_6 = (_Bool)0;
int var_8 = 1255992893;
unsigned long long int var_11 = 7037728961606060129ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int var_15 = 279351811;
int zero = 0;
unsigned short var_17 = (unsigned short)15126;
unsigned long long int var_18 = 14916170895953522362ULL;
int var_19 = -1535999949;
_Bool var_20 = (_Bool)0;
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
