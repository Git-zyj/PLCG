#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned short var_2 = (unsigned short)47065;
signed char var_3 = (signed char)-64;
_Bool var_5 = (_Bool)0;
long long int var_6 = -4292215129644825054LL;
unsigned short var_10 = (unsigned short)8446;
int zero = 0;
unsigned short var_14 = (unsigned short)41473;
unsigned int var_15 = 2900757405U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
