#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
int var_6 = -1847846940;
short var_9 = (short)7412;
long long int var_10 = -7040354798831072239LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6519658624171811219ULL;
long long int var_16 = -6173316508259659657LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-14213;
_Bool var_21 = (_Bool)1;
short var_22 = (short)2720;
signed char var_23 = (signed char)60;
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
