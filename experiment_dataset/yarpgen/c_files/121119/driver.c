#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned char var_2 = (unsigned char)171;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)11037;
short var_14 = (short)-9933;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3765538556033887205LL;
int zero = 0;
short var_20 = (short)-13416;
int var_21 = -1744231034;
void init() {
}

void checksum() {
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
