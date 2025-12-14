#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-28792;
short var_8 = (short)144;
unsigned long long int var_11 = 7836527629079823671ULL;
short var_12 = (short)2504;
unsigned long long int var_16 = 3793521155236040307ULL;
short var_18 = (short)12960;
int zero = 0;
unsigned long long int var_19 = 5818856493895067000ULL;
unsigned long long int var_20 = 11905182308836995393ULL;
unsigned long long int var_21 = 18295662816972969403ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
