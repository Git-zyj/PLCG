#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 2890670333799147183ULL;
unsigned long long int var_9 = 13453964408624807020ULL;
int var_12 = 350693500;
int zero = 0;
short var_17 = (short)3144;
unsigned int var_18 = 2590470698U;
void init() {
}

void checksum() {
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
