#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 22295213;
signed char var_6 = (signed char)-1;
short var_11 = (short)-3762;
unsigned long long int var_14 = 14166486348978088102ULL;
unsigned int var_16 = 1977340960U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2319686493018420798ULL;
unsigned short var_22 = (unsigned short)237;
void init() {
}

void checksum() {
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
