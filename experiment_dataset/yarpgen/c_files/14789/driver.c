#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3216917683101726820ULL;
unsigned int var_7 = 596910321U;
unsigned long long int var_13 = 174493784394701150ULL;
long long int var_17 = 2272489027988765878LL;
int zero = 0;
signed char var_20 = (signed char)80;
long long int var_21 = -6183563890036905057LL;
unsigned long long int var_22 = 1480073473377790212ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
