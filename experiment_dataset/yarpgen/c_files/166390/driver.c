#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7534707497486297743LL;
unsigned int var_6 = 1285935458U;
unsigned long long int var_9 = 9046678765664617700ULL;
unsigned long long int var_10 = 16063320202504205023ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3879474717U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
