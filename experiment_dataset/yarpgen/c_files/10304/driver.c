#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
long long int var_3 = -19669436893636635LL;
unsigned int var_4 = 1603072136U;
int var_8 = 1624708437;
short var_11 = (short)31335;
int zero = 0;
long long int var_14 = -6325847306223026492LL;
short var_15 = (short)-15875;
unsigned int var_16 = 3015366419U;
int var_17 = -287767658;
int var_18 = -916454951;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
