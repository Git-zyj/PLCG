#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19332;
long long int var_6 = -3673484928854664966LL;
short var_7 = (short)-8868;
signed char var_15 = (signed char)44;
int zero = 0;
signed char var_17 = (signed char)-91;
unsigned char var_18 = (unsigned char)106;
short var_19 = (short)-26923;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
