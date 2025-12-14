#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned short var_2 = (unsigned short)59628;
unsigned short var_7 = (unsigned short)14246;
int var_8 = -1504687829;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)3714;
long long int var_16 = -5235566529398607347LL;
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
