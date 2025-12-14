#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7341025882540264662ULL;
unsigned int var_8 = 1314209917U;
short var_9 = (short)-11340;
signed char var_10 = (signed char)41;
unsigned short var_12 = (unsigned short)20221;
unsigned int var_15 = 1023046254U;
unsigned int var_18 = 3710213473U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)44468;
signed char var_22 = (signed char)101;
unsigned long long int var_23 = 17585880228026365440ULL;
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
