#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16151001787003926991ULL;
unsigned int var_2 = 2024763604U;
long long int var_8 = -6210292574733553595LL;
unsigned long long int var_18 = 2086778329488343522ULL;
int zero = 0;
signed char var_20 = (signed char)-35;
unsigned int var_21 = 1189308566U;
unsigned long long int var_22 = 3980316585190342331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
