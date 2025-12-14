#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1508863493U;
unsigned short var_3 = (unsigned short)63405;
long long int var_5 = 6394833911478028856LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)47885;
signed char var_8 = (signed char)6;
unsigned short var_9 = (unsigned short)36764;
short var_10 = (short)5592;
int zero = 0;
unsigned char var_19 = (unsigned char)159;
unsigned int var_20 = 965416432U;
short var_21 = (short)-13043;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
