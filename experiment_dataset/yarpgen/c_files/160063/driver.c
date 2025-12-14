#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2270283861U;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-95;
unsigned long long int var_11 = 11360359190896185545ULL;
int zero = 0;
unsigned int var_12 = 4159561833U;
unsigned long long int var_13 = 8210787066999860258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
