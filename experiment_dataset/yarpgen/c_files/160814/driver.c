#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-100;
signed char var_8 = (signed char)122;
signed char var_14 = (signed char)17;
signed char var_15 = (signed char)2;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-24621;
unsigned short var_19 = (unsigned short)57076;
void init() {
}

void checksum() {
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
