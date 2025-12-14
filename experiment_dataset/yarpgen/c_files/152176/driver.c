#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
signed char var_5 = (signed char)-81;
unsigned short var_6 = (unsigned short)40126;
short var_8 = (short)11891;
signed char var_13 = (signed char)-50;
int zero = 0;
unsigned int var_19 = 1052441698U;
unsigned int var_20 = 2377695481U;
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
