#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1980739986;
int var_2 = -305316991;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)114;
unsigned short var_12 = (unsigned short)30341;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
