#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1502220144564799344LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7554648729861146186ULL;
int zero = 0;
unsigned long long int var_11 = 11835135395808740752ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2275529805U;
signed char var_14 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
