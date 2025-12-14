#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 582412868;
short var_1 = (short)32645;
unsigned int var_3 = 2573276209U;
signed char var_4 = (signed char)9;
signed char var_5 = (signed char)69;
unsigned char var_6 = (unsigned char)100;
int var_7 = -529965888;
int var_9 = -1043898379;
short var_10 = (short)25988;
unsigned int var_11 = 1414066708U;
unsigned int var_12 = 2938325574U;
int zero = 0;
short var_16 = (short)13826;
long long int var_17 = 3086434254960202704LL;
unsigned int var_18 = 1603230673U;
unsigned int var_19 = 2752130540U;
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
