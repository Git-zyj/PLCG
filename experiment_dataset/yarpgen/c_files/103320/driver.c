#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 367881649;
signed char var_8 = (signed char)-41;
signed char var_12 = (signed char)-17;
short var_13 = (short)25953;
signed char var_15 = (signed char)-93;
short var_16 = (short)23134;
short var_17 = (short)18348;
int zero = 0;
signed char var_19 = (signed char)27;
short var_20 = (short)-21570;
void init() {
}

void checksum() {
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
