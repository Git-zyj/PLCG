#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)9;
unsigned int var_7 = 735956020U;
signed char var_9 = (signed char)-50;
int zero = 0;
unsigned long long int var_11 = 10374147932667087651ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1935909284U;
_Bool var_14 = (_Bool)1;
int var_15 = 693809537;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
