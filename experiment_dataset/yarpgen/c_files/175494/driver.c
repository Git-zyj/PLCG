#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8772873992778822513LL;
long long int var_3 = 7157991305580689740LL;
long long int var_8 = -5405058334637368745LL;
int zero = 0;
long long int var_12 = -635121007574674605LL;
long long int var_13 = -3192493413961276976LL;
long long int var_14 = 440879427633856310LL;
long long int var_15 = -5721102755249315945LL;
long long int var_16 = 5889452187658886353LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
