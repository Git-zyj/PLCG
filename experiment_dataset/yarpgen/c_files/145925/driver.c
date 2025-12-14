#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)5;
short var_8 = (short)12216;
unsigned short var_9 = (unsigned short)37729;
int var_10 = 171376081;
signed char var_13 = (signed char)45;
unsigned int var_16 = 2360924388U;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
long long int var_22 = 8507276921466256615LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
