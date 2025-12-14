#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30229;
short var_10 = (short)29143;
long long int var_15 = -8845419588812997442LL;
unsigned short var_17 = (unsigned short)53881;
int zero = 0;
signed char var_18 = (signed char)60;
signed char var_19 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
