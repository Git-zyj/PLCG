#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -313816163;
unsigned int var_4 = 956676581U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-12245;
short var_9 = (short)15241;
unsigned long long int var_10 = 4931342290940368066ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-60;
short var_13 = (short)20735;
int var_14 = 1644267880;
unsigned int var_15 = 3182267609U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
