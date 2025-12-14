#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22563;
unsigned int var_3 = 1024276861U;
signed char var_5 = (signed char)-84;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 3807770509927167007ULL;
int zero = 0;
signed char var_10 = (signed char)-118;
int var_11 = 1106699392;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
