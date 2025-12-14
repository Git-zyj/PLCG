#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)122;
int var_6 = 1832611567;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-17;
unsigned char var_13 = (unsigned char)53;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
_Bool var_15 = (_Bool)1;
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
