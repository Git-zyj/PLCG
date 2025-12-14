#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4198026269781985768ULL;
signed char var_3 = (signed char)-17;
short var_6 = (short)-17086;
_Bool var_7 = (_Bool)0;
long long int var_8 = 1669260031111151222LL;
int zero = 0;
signed char var_10 = (signed char)21;
signed char var_11 = (signed char)100;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10276071291881419433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
