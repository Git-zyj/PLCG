#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1116935785049916772LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)12480;
int var_3 = -198704612;
signed char var_4 = (signed char)-23;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)101;
short var_7 = (short)-20494;
unsigned short var_9 = (unsigned short)20552;
long long int var_10 = -2182161077580182850LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)46428;
short var_13 = (short)22370;
signed char var_14 = (signed char)102;
short var_15 = (short)-1624;
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
