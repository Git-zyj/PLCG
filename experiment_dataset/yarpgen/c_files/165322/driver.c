#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4253560723U;
_Bool var_5 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_14 = 2112794965;
int var_15 = -2130534756;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-17779;
long long int var_21 = 338171166136346829LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
