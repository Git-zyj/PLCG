#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4027107548795712149LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)38;
int var_11 = -1170495636;
int zero = 0;
unsigned long long int var_15 = 2754174746751049385ULL;
signed char var_16 = (signed char)7;
short var_17 = (short)31812;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
