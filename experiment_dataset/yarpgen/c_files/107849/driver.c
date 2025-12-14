#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9105;
unsigned char var_5 = (unsigned char)122;
unsigned int var_12 = 986674331U;
signed char var_15 = (signed char)43;
int zero = 0;
int var_16 = -1288208348;
unsigned char var_17 = (unsigned char)244;
_Bool var_18 = (_Bool)0;
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
