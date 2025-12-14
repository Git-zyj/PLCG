#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6187;
short var_1 = (short)25354;
signed char var_6 = (signed char)-41;
signed char var_7 = (signed char)23;
unsigned int var_8 = 937401795U;
unsigned int var_10 = 3117740793U;
int zero = 0;
unsigned int var_11 = 2780002492U;
unsigned short var_12 = (unsigned short)63405;
unsigned short var_13 = (unsigned short)38597;
void init() {
}

void checksum() {
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
