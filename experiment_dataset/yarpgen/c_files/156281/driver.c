#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -503777158207288207LL;
signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3388542306U;
unsigned short var_6 = (unsigned short)43101;
long long int var_12 = 2121463233708135161LL;
int zero = 0;
unsigned short var_14 = (unsigned short)29248;
long long int var_15 = 4049898052834223484LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
