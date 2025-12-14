#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13003;
unsigned short var_4 = (unsigned short)55800;
unsigned long long int var_5 = 12555659620744793762ULL;
unsigned char var_6 = (unsigned char)245;
unsigned short var_7 = (unsigned short)61489;
long long int var_8 = 2501549798375494792LL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 897994947U;
int zero = 0;
unsigned char var_15 = (unsigned char)68;
unsigned char var_16 = (unsigned char)39;
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
