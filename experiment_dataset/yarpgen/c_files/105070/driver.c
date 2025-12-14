#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 841248829U;
signed char var_7 = (signed char)90;
unsigned short var_8 = (unsigned short)51605;
unsigned long long int var_9 = 7726143658385092274ULL;
long long int var_12 = 3337457333459291226LL;
unsigned int var_13 = 3051406908U;
unsigned short var_14 = (unsigned short)29013;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
long long int var_16 = -6750663745185203594LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
