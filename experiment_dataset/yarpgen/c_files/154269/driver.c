#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1857904167;
_Bool var_3 = (_Bool)0;
int var_4 = -582534872;
unsigned long long int var_6 = 4578267739364721349ULL;
signed char var_9 = (signed char)-80;
unsigned long long int var_12 = 821476434217319528ULL;
int var_13 = -1038637201;
signed char var_14 = (signed char)115;
signed char var_16 = (signed char)-92;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-112;
unsigned long long int var_19 = 17976903013715790398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
