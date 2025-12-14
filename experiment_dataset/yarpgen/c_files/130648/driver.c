#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1059;
short var_3 = (short)-13054;
unsigned short var_4 = (unsigned short)55289;
long long int var_5 = -4627346760986883996LL;
signed char var_6 = (signed char)31;
_Bool var_7 = (_Bool)0;
long long int var_8 = 7993400312553238104LL;
unsigned int var_9 = 4166744500U;
signed char var_10 = (signed char)84;
int var_11 = 1746990354;
int zero = 0;
long long int var_13 = 3695309609879681733LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
