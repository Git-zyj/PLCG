#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52950;
int var_9 = -950695477;
signed char var_10 = (signed char)-21;
unsigned int var_15 = 64872465U;
int zero = 0;
short var_17 = (short)-13458;
unsigned long long int var_18 = 10735934135944470787ULL;
unsigned long long int var_19 = 2313031674374632884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
