#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 394019532U;
unsigned int var_2 = 3481523987U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)25968;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)87;
signed char var_12 = (signed char)-71;
unsigned char var_14 = (unsigned char)166;
signed char var_16 = (signed char)108;
int zero = 0;
unsigned int var_18 = 2647825443U;
unsigned int var_19 = 149048783U;
unsigned long long int var_20 = 6730368727956859926ULL;
long long int var_21 = -631718968891996113LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
