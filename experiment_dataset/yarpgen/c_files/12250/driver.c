#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30331;
unsigned short var_5 = (unsigned short)45783;
unsigned int var_6 = 2235481330U;
unsigned short var_9 = (unsigned short)52755;
int var_10 = -209339327;
int zero = 0;
signed char var_12 = (signed char)-17;
int var_13 = -156663803;
unsigned int var_14 = 3844080938U;
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
