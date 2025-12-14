#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 712295039U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 13109689310432547926ULL;
int var_8 = -369344439;
int zero = 0;
short var_13 = (short)30725;
unsigned long long int var_14 = 5365119267904537695ULL;
void init() {
}

void checksum() {
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
