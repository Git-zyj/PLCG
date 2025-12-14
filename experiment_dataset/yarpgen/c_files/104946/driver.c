#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3168470094U;
unsigned int var_1 = 2483608450U;
signed char var_3 = (signed char)123;
int var_7 = -1847422322;
signed char var_8 = (signed char)-17;
int var_10 = 876066317;
long long int var_12 = -3710115808569592792LL;
int zero = 0;
int var_14 = -476926947;
long long int var_15 = -2356289341289475013LL;
long long int var_16 = 4457711053003242296LL;
void init() {
}

void checksum() {
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
