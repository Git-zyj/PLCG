#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15008;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1398841635U;
unsigned short var_3 = (unsigned short)36087;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-28874;
int var_9 = -1423669925;
signed char var_11 = (signed char)100;
unsigned short var_12 = (unsigned short)58910;
short var_13 = (short)-6936;
unsigned short var_14 = (unsigned short)18324;
unsigned int var_15 = 251135879U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)13576;
short var_18 = (short)15510;
int zero = 0;
unsigned int var_19 = 2768189716U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12860383153732443221ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
short var_24 = (short)21144;
short var_25 = (short)-29378;
signed char var_26 = (signed char)2;
int var_27 = -1598702333;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 605454586U;
unsigned int var_30 = 3233090739U;
long long int var_31 = -7252895427232046626LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
