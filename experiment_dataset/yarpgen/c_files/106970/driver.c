#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned long long int var_1 = 2896121847795008616ULL;
short var_4 = (short)24515;
long long int var_5 = -6240308653891766383LL;
long long int var_9 = 2651776939436257815LL;
short var_11 = (short)6581;
long long int var_14 = 3601418086831853754LL;
int zero = 0;
unsigned long long int var_16 = 14813978559012428605ULL;
long long int var_17 = -7218968141583823026LL;
short var_18 = (short)-24448;
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
