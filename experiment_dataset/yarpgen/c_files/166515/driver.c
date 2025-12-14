#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1089482770;
signed char var_5 = (signed char)76;
long long int var_6 = -3033566970600076782LL;
short var_8 = (short)28479;
signed char var_11 = (signed char)-64;
int zero = 0;
long long int var_13 = 4104239780991073428LL;
short var_14 = (short)29354;
unsigned int var_15 = 321360261U;
signed char var_16 = (signed char)-48;
void init() {
}

void checksum() {
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
