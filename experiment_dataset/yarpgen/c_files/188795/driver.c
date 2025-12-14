#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49796;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-3142;
short var_5 = (short)8435;
long long int var_6 = 2805479620148507073LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3596876400073729191LL;
unsigned char var_10 = (unsigned char)43;
int zero = 0;
short var_11 = (short)-26791;
signed char var_12 = (signed char)-31;
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
