#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 906776880;
signed char var_2 = (signed char)-91;
unsigned int var_6 = 2434043091U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 573330149390222903ULL;
long long int var_15 = 2054881275512126645LL;
int zero = 0;
signed char var_16 = (signed char)-3;
short var_17 = (short)4656;
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
