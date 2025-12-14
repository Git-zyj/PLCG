#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22928;
signed char var_3 = (signed char)26;
unsigned int var_4 = 919356676U;
unsigned int var_5 = 3353419841U;
signed char var_6 = (signed char)71;
int var_9 = -1285446765;
int var_10 = -115912178;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)27089;
_Bool var_13 = (_Bool)0;
int var_14 = 514364193;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
