#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2335567562U;
short var_4 = (short)-4436;
int var_5 = -101872708;
unsigned long long int var_6 = 16399135230465695809ULL;
short var_7 = (short)-25329;
unsigned long long int var_8 = 14416029745355903076ULL;
int var_10 = 767401267;
int zero = 0;
short var_11 = (short)-23183;
int var_12 = -399480077;
long long int var_13 = -6351764197527923260LL;
signed char var_14 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
