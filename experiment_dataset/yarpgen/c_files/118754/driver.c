#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25235;
_Bool var_5 = (_Bool)1;
short var_6 = (short)4214;
signed char var_9 = (signed char)-9;
unsigned long long int var_11 = 180650109643478722ULL;
int zero = 0;
int var_14 = -1140129714;
unsigned short var_15 = (unsigned short)57738;
unsigned short var_16 = (unsigned short)55310;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
