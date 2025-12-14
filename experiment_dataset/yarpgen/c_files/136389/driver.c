#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2465512105U;
_Bool var_3 = (_Bool)1;
signed char var_8 = (signed char)-76;
unsigned int var_12 = 1418835686U;
int zero = 0;
unsigned long long int var_15 = 17602360602807761366ULL;
unsigned int var_16 = 3561285176U;
void init() {
}

void checksum() {
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
