#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1902595978;
signed char var_3 = (signed char)86;
short var_5 = (short)29913;
signed char var_7 = (signed char)-69;
unsigned char var_8 = (unsigned char)100;
unsigned int var_12 = 2571100822U;
signed char var_14 = (signed char)-19;
int zero = 0;
unsigned int var_16 = 963750147U;
signed char var_17 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
