#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
unsigned short var_5 = (unsigned short)47234;
unsigned int var_6 = 2464662865U;
unsigned short var_7 = (unsigned short)50540;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12021223804561393056ULL;
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
