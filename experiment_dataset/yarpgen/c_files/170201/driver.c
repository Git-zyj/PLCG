#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3685410261239741985LL;
_Bool var_9 = (_Bool)0;
int var_12 = 454200430;
int var_15 = 533862675;
signed char var_17 = (signed char)-55;
long long int var_18 = 3777685799921114951LL;
int zero = 0;
unsigned int var_19 = 2787128120U;
unsigned long long int var_20 = 1616167360526814713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
