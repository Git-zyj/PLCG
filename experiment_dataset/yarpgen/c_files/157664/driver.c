#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1170692801;
unsigned int var_6 = 439502247U;
unsigned int var_8 = 3900482164U;
unsigned long long int var_9 = 16411762208735407350ULL;
long long int var_12 = -3393653755145353945LL;
int zero = 0;
unsigned long long int var_13 = 4330534873392649206ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
