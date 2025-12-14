#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
signed char var_3 = (signed char)28;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)25248;
int var_9 = 205387154;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 864119844U;
long long int var_12 = 304322764959564369LL;
signed char var_13 = (signed char)-47;
int zero = 0;
int var_14 = 151440053;
int var_15 = 216765510;
unsigned int var_16 = 3305977534U;
short var_17 = (short)-26605;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
