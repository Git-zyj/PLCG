#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)113;
long long int var_13 = -614183669019550066LL;
unsigned int var_14 = 3500907934U;
signed char var_16 = (signed char)63;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 605666676U;
unsigned short var_22 = (unsigned short)24365;
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
