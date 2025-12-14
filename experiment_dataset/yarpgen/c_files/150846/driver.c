#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
long long int var_7 = 308363806319180029LL;
unsigned int var_13 = 93954507U;
unsigned int var_15 = 1414006956U;
int var_17 = 777609360;
int zero = 0;
unsigned short var_19 = (unsigned short)63789;
short var_20 = (short)-29782;
signed char var_21 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
