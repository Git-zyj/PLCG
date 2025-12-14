#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9077972424692694050LL;
unsigned int var_3 = 2654377989U;
int var_7 = -642390624;
unsigned int var_8 = 2193592572U;
int var_10 = 1832504721;
int zero = 0;
signed char var_12 = (signed char)-66;
int var_13 = 809072952;
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
