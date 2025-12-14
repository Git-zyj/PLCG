#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1128966877U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-111;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)220;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)66;
unsigned char var_13 = (unsigned char)252;
int var_14 = 2037090018;
unsigned int var_15 = 1156470680U;
int zero = 0;
unsigned int var_16 = 3603467918U;
unsigned char var_17 = (unsigned char)212;
unsigned int var_18 = 334758958U;
unsigned int var_19 = 2451307061U;
int var_20 = -2116596003;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
