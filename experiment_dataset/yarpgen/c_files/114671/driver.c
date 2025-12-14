#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13456936105978163315ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17175757728810655093ULL;
unsigned long long int var_7 = 8163654340117317987ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 3748937602008773316ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 724941758U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
