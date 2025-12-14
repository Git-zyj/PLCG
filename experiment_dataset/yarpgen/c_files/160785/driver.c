#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 763810243U;
int var_2 = -344471185;
signed char var_4 = (signed char)88;
signed char var_9 = (signed char)-98;
unsigned long long int var_15 = 5325637106654649346ULL;
int zero = 0;
int var_18 = 2136284453;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
