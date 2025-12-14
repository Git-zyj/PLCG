#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2901554307U;
short var_1 = (short)-19469;
short var_3 = (short)1060;
unsigned int var_7 = 2448104080U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3002605671U;
unsigned char var_14 = (unsigned char)147;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-9707;
signed char var_18 = (signed char)-124;
int zero = 0;
long long int var_20 = -8434725864932268052LL;
signed char var_21 = (signed char)-88;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)225;
long long int var_24 = 7815910334827761234LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
