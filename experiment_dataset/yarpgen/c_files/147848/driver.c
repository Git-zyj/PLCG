#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -669809471;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)33;
unsigned short var_16 = (unsigned short)31244;
int zero = 0;
unsigned int var_19 = 3145957637U;
short var_20 = (short)25549;
_Bool var_21 = (_Bool)1;
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
