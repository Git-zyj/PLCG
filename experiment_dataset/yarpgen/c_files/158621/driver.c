#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 4769787812973304954ULL;
long long int var_4 = -8953190554458529027LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)64;
long long int var_7 = -1643353003855021705LL;
int var_9 = 1750467078;
unsigned long long int var_10 = 7266311372029384494ULL;
int zero = 0;
signed char var_11 = (signed char)-67;
unsigned char var_12 = (unsigned char)246;
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
