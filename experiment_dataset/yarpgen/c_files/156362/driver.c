#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32070;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)36;
unsigned char var_14 = (unsigned char)97;
int zero = 0;
unsigned short var_16 = (unsigned short)53904;
short var_17 = (short)30602;
int var_18 = 987027965;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
