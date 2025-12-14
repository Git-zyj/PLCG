#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28823;
short var_4 = (short)6796;
short var_10 = (short)-16632;
short var_11 = (short)32140;
int var_13 = 332957181;
int var_16 = 13731736;
int zero = 0;
int var_19 = 128902815;
int var_20 = 664178795;
signed char var_21 = (signed char)-61;
short var_22 = (short)29334;
signed char var_23 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
