#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2341870910146093511LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 14908016953607684622ULL;
signed char var_9 = (signed char)-43;
signed char var_12 = (signed char)12;
unsigned int var_19 = 1828479769U;
int zero = 0;
signed char var_20 = (signed char)-119;
unsigned int var_21 = 3485921890U;
void init() {
}

void checksum() {
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
