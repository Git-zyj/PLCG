#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7061592340031529241LL;
unsigned short var_4 = (unsigned short)16203;
unsigned char var_5 = (unsigned char)219;
unsigned int var_6 = 3197971719U;
int zero = 0;
unsigned int var_15 = 975886350U;
short var_16 = (short)2782;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
