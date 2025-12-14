#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15144;
_Bool var_2 = (_Bool)0;
short var_4 = (short)27856;
short var_5 = (short)-2508;
short var_6 = (short)31516;
short var_7 = (short)-22435;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_17 = (short)-16385;
short var_18 = (short)-424;
short var_19 = (short)-9761;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)7399;
_Bool var_22 = (_Bool)1;
short var_23 = (short)12442;
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
