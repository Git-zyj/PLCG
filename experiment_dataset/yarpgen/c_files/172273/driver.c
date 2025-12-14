#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -80570142;
int var_6 = -211298022;
signed char var_7 = (signed char)-79;
short var_11 = (short)-3789;
short var_12 = (short)-19724;
long long int var_13 = 4800671162888136600LL;
signed char var_15 = (signed char)-107;
int zero = 0;
int var_17 = -770133837;
short var_18 = (short)-16367;
int var_19 = 1100468800;
int var_20 = 585277224;
void init() {
}

void checksum() {
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
