#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25323;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)56323;
int zero = 0;
unsigned short var_20 = (unsigned short)59014;
_Bool var_21 = (_Bool)0;
short var_22 = (short)29904;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
