#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15613;
long long int var_6 = 53036485744049537LL;
long long int var_8 = 8755740098053032045LL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-24789;
int zero = 0;
int var_15 = 822929058;
long long int var_16 = -6725796656768109149LL;
unsigned int var_17 = 555677603U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
