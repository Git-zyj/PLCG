#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)97;
long long int var_5 = -6984029042758972656LL;
unsigned int var_10 = 61881217U;
unsigned int var_12 = 110375292U;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 2891016988U;
int zero = 0;
unsigned long long int var_16 = 6840552567025293680ULL;
unsigned long long int var_17 = 16425684469100900555ULL;
int var_18 = -711261165;
signed char var_19 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
