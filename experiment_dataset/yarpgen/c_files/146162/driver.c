#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -187722361;
unsigned char var_6 = (unsigned char)79;
signed char var_9 = (signed char)-48;
unsigned char var_10 = (unsigned char)57;
signed char var_11 = (signed char)-104;
short var_12 = (short)29535;
int zero = 0;
short var_13 = (short)-8433;
int var_14 = 1058473967;
unsigned long long int var_15 = 8417843072305731990ULL;
signed char var_16 = (signed char)-40;
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
