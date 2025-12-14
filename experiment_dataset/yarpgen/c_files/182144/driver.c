#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 859514779;
unsigned long long int var_3 = 9857366903436294406ULL;
unsigned long long int var_4 = 18130004518897596240ULL;
int var_6 = 484200832;
short var_8 = (short)-28170;
int var_10 = -1115737625;
int zero = 0;
signed char var_12 = (signed char)-6;
signed char var_13 = (signed char)-38;
int var_14 = -674835607;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
