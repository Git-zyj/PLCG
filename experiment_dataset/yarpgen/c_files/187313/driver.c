#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2811448671U;
unsigned int var_3 = 2998228687U;
unsigned int var_6 = 3600586444U;
unsigned int var_7 = 685519058U;
short var_11 = (short)18327;
unsigned int var_12 = 1121209537U;
short var_15 = (short)-3524;
int zero = 0;
unsigned int var_16 = 1409427119U;
unsigned int var_17 = 133719047U;
unsigned int var_18 = 2613464973U;
unsigned int var_19 = 3842260767U;
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
