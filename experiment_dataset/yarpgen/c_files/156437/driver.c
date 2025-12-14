#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 459483214;
int var_1 = 915454827;
unsigned int var_2 = 1092614323U;
unsigned int var_4 = 3836661075U;
signed char var_7 = (signed char)65;
signed char var_8 = (signed char)-120;
int var_9 = -202627159;
signed char var_10 = (signed char)-101;
unsigned int var_12 = 1888887340U;
signed char var_15 = (signed char)122;
int zero = 0;
int var_16 = 1626915539;
long long int var_17 = 7490512336433372729LL;
unsigned int var_18 = 582120944U;
signed char var_19 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
