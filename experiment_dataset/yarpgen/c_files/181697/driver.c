#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3597214413U;
signed char var_2 = (signed char)-95;
signed char var_6 = (signed char)117;
long long int var_8 = -6869084410404434489LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-106;
int zero = 0;
unsigned int var_11 = 2247389227U;
unsigned short var_12 = (unsigned short)31586;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
