#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -660630112587590305LL;
_Bool var_3 = (_Bool)1;
int var_4 = -407027449;
signed char var_5 = (signed char)115;
short var_8 = (short)32520;
signed char var_9 = (signed char)127;
int zero = 0;
int var_10 = 2116313617;
short var_11 = (short)4326;
int var_12 = -1079758186;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
