#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -446140547;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 944221938U;
unsigned long long int var_6 = 1603039708191888746ULL;
unsigned long long int var_8 = 7637949432172020746ULL;
unsigned long long int var_9 = 14487056343262271395ULL;
long long int var_10 = -8803033827282715800LL;
_Bool var_11 = (_Bool)1;
int var_13 = -2042786887;
_Bool var_14 = (_Bool)0;
short var_16 = (short)7173;
signed char var_18 = (signed char)33;
int zero = 0;
unsigned int var_19 = 311177069U;
unsigned int var_20 = 3163474875U;
int var_21 = -1447114948;
unsigned short var_22 = (unsigned short)30515;
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
