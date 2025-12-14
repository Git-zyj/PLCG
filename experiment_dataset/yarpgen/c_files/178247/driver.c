#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24742;
unsigned short var_5 = (unsigned short)64533;
short var_6 = (short)7450;
int var_7 = -1107082002;
short var_8 = (short)-22451;
short var_9 = (short)-28891;
int zero = 0;
int var_10 = -1995956285;
unsigned int var_11 = 1423291367U;
signed char var_12 = (signed char)-69;
short var_13 = (short)-19505;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
