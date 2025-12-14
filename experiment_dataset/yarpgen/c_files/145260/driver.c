#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27560;
unsigned short var_6 = (unsigned short)25124;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 1053108473157781537LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
