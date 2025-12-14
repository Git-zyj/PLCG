#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)187;
long long int var_2 = -8887309141392187406LL;
unsigned int var_3 = 1127299930U;
_Bool var_4 = (_Bool)0;
int var_5 = 1141445972;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned int var_11 = 3969744177U;
short var_12 = (short)11058;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
