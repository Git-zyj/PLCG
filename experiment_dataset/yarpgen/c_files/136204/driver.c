#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-6;
unsigned short var_3 = (unsigned short)25004;
unsigned short var_5 = (unsigned short)10235;
signed char var_6 = (signed char)-73;
short var_10 = (short)-23712;
int zero = 0;
unsigned short var_12 = (unsigned short)4903;
unsigned int var_13 = 4229765954U;
unsigned short var_14 = (unsigned short)12728;
unsigned int var_15 = 1709186009U;
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
