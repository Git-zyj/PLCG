#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 795494054U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2619137648391667293LL;
unsigned short var_4 = (unsigned short)52441;
unsigned int var_6 = 2436147318U;
unsigned short var_7 = (unsigned short)54038;
unsigned int var_8 = 1676614163U;
signed char var_9 = (signed char)31;
short var_12 = (short)32302;
short var_13 = (short)32153;
long long int var_15 = 1071270070235189429LL;
signed char var_17 = (signed char)49;
short var_19 = (short)18146;
int zero = 0;
unsigned int var_20 = 1601185436U;
signed char var_21 = (signed char)3;
short var_22 = (short)-25769;
signed char var_23 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
