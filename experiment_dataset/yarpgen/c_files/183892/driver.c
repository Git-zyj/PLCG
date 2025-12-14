#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3632464395U;
long long int var_2 = 2314171250544222708LL;
unsigned char var_3 = (unsigned char)146;
unsigned int var_8 = 3972320979U;
long long int var_13 = 6863708838754072748LL;
unsigned short var_15 = (unsigned short)55969;
int zero = 0;
signed char var_16 = (signed char)72;
unsigned char var_17 = (unsigned char)225;
unsigned short var_18 = (unsigned short)8411;
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
