#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)332;
signed char var_4 = (signed char)108;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 486314948U;
short var_10 = (short)-15872;
signed char var_11 = (signed char)-64;
unsigned short var_12 = (unsigned short)38844;
int zero = 0;
long long int var_13 = -3520696141468490076LL;
short var_14 = (short)8151;
short var_15 = (short)-30486;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
