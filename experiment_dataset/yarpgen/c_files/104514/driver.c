#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4736262013131855980ULL;
short var_1 = (short)-5588;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)13434;
long long int var_6 = 4581636399229939096LL;
unsigned long long int var_8 = 807095418429540033ULL;
unsigned int var_9 = 3456067885U;
unsigned short var_10 = (unsigned short)47092;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-40;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 427121417U;
_Bool var_18 = (_Bool)0;
int var_19 = 1580420279;
unsigned char var_20 = (unsigned char)126;
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
