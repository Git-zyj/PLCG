#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 937156563;
unsigned long long int var_2 = 16493817490934424830ULL;
signed char var_6 = (signed char)-92;
signed char var_7 = (signed char)-17;
signed char var_8 = (signed char)-41;
int zero = 0;
short var_13 = (short)12851;
short var_14 = (short)-24727;
void init() {
}

void checksum() {
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
