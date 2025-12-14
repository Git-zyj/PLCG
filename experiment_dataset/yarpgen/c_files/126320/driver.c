#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2108606604;
unsigned short var_2 = (unsigned short)47612;
unsigned short var_3 = (unsigned short)25679;
long long int var_4 = -102757346456873581LL;
int var_6 = -965156000;
short var_8 = (short)15807;
short var_9 = (short)32444;
unsigned int var_11 = 3560115431U;
int zero = 0;
long long int var_12 = 680409310776948560LL;
long long int var_13 = -8093330351331183619LL;
long long int var_14 = 8698013737371052809LL;
unsigned int var_15 = 4062789803U;
unsigned short var_16 = (unsigned short)7181;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
