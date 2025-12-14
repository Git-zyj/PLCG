#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-1681;
int var_2 = 168722834;
short var_5 = (short)25860;
short var_6 = (short)-25162;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-60;
short var_9 = (short)-21693;
short var_10 = (short)25661;
long long int var_11 = 2903143714541599836LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-50;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8337658621709138690LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
