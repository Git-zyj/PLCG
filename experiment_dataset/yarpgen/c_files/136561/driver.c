#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-6149;
unsigned int var_5 = 15660794U;
signed char var_7 = (signed char)-10;
unsigned short var_10 = (unsigned short)24109;
short var_11 = (short)-12471;
int var_13 = 1647920385;
short var_15 = (short)8188;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1035990818;
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
