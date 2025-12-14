#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13274;
long long int var_3 = -8581011347511593884LL;
unsigned int var_12 = 2395109069U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-57;
long long int var_15 = -2993844544199979746LL;
void init() {
}

void checksum() {
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
