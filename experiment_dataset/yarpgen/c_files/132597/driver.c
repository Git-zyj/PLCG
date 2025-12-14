#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5258935840529444686LL;
unsigned int var_11 = 1961830540U;
unsigned int var_12 = 2483167198U;
int zero = 0;
unsigned int var_17 = 3591482881U;
long long int var_18 = -4693465178752613424LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
