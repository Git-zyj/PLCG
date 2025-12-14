#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
signed char var_3 = (signed char)58;
short var_5 = (short)-11271;
signed char var_8 = (signed char)-17;
unsigned short var_9 = (unsigned short)45664;
signed char var_10 = (signed char)96;
int zero = 0;
unsigned short var_12 = (unsigned short)30132;
signed char var_13 = (signed char)29;
unsigned char var_14 = (unsigned char)68;
unsigned char var_15 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
