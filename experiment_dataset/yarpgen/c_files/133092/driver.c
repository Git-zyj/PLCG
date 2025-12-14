#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25617;
int var_3 = 71681020;
unsigned short var_4 = (unsigned short)3013;
long long int var_5 = -8869556622940079701LL;
_Bool var_6 = (_Bool)1;
int var_7 = -441434556;
unsigned short var_9 = (unsigned short)11941;
int var_10 = 1065561407;
int zero = 0;
unsigned long long int var_11 = 16251486013878386783ULL;
signed char var_12 = (signed char)-41;
short var_13 = (short)31491;
int var_14 = 1296895798;
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
