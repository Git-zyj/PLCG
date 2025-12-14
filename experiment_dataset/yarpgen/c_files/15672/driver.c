#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20565;
int var_4 = 761824493;
short var_9 = (short)4015;
long long int var_10 = 2034777959458833970LL;
unsigned short var_11 = (unsigned short)11561;
short var_13 = (short)14072;
short var_14 = (short)3069;
int var_15 = -422877233;
int zero = 0;
short var_17 = (short)27102;
int var_18 = -2102697664;
signed char var_19 = (signed char)48;
unsigned int var_20 = 1828472908U;
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
