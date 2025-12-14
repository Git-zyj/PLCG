#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25397;
unsigned long long int var_1 = 12572864749718898577ULL;
int var_2 = 115186031;
signed char var_4 = (signed char)77;
short var_5 = (short)6412;
short var_6 = (short)-7307;
short var_8 = (short)29055;
short var_10 = (short)10557;
int var_12 = 262176621;
int zero = 0;
short var_13 = (short)-4719;
int var_14 = -902087717;
unsigned long long int var_15 = 11639806254419677240ULL;
int var_16 = -1449749440;
int var_17 = -272358236;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
