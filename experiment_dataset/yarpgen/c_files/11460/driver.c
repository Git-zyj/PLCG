#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3993603888045502083LL;
_Bool var_1 = (_Bool)1;
int var_2 = -509409418;
long long int var_12 = -8262832586541021884LL;
_Bool var_14 = (_Bool)0;
int var_15 = -1461453100;
int zero = 0;
int var_16 = -788039548;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)96;
signed char var_19 = (signed char)-87;
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
