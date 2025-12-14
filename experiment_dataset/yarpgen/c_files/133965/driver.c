#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
int var_1 = 984128010;
short var_3 = (short)12939;
signed char var_5 = (signed char)-50;
short var_6 = (short)-16714;
short var_9 = (short)8563;
unsigned int var_15 = 3985246646U;
unsigned char var_16 = (unsigned char)169;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
