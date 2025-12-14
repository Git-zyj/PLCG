#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31749;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 2437421379128237285ULL;
int zero = 0;
short var_10 = (short)32093;
unsigned long long int var_11 = 3916669808244802614ULL;
short var_12 = (short)10558;
unsigned long long int var_13 = 2938038949597801903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
