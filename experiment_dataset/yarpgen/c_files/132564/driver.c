#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37951;
long long int var_1 = 352411871057752933LL;
short var_3 = (short)24052;
short var_5 = (short)20206;
signed char var_10 = (signed char)116;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7835330768323511731LL;
short var_15 = (short)4021;
int var_16 = -1254811625;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
