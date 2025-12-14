#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2923;
short var_2 = (short)-31292;
unsigned int var_3 = 2669398049U;
signed char var_5 = (signed char)-60;
int var_6 = -409379878;
signed char var_7 = (signed char)97;
unsigned short var_8 = (unsigned short)60875;
short var_9 = (short)21466;
signed char var_10 = (signed char)-123;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2659001026557097843LL;
unsigned int var_13 = 3960374333U;
short var_14 = (short)10432;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
