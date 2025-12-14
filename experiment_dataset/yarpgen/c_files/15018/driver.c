#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6794;
unsigned long long int var_4 = 15466807096463552942ULL;
long long int var_7 = -250660599465180258LL;
unsigned long long int var_8 = 4002327859263221464ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 3666680455686226241ULL;
short var_11 = (short)30587;
short var_15 = (short)-1073;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -1884817914045189453LL;
unsigned short var_18 = (unsigned short)34022;
int var_19 = 1986665449;
signed char var_20 = (signed char)49;
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
