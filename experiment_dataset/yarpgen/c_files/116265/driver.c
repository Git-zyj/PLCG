#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -213556062;
unsigned int var_7 = 1086807529U;
unsigned long long int var_11 = 5795421059570501425ULL;
int zero = 0;
signed char var_16 = (signed char)-117;
_Bool var_17 = (_Bool)1;
int var_18 = 1999028718;
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
