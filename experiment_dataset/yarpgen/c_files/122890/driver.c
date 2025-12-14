#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1037050172U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3136008056U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1693885786U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 3674601961U;
unsigned int var_17 = 4007350760U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2317136520U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
