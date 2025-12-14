#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1045541998U;
unsigned int var_3 = 2413660968U;
long long int var_4 = -6069867104951040277LL;
unsigned int var_5 = 205548117U;
long long int var_8 = -1477799859357058899LL;
long long int var_9 = 5503446519445094303LL;
unsigned int var_10 = 1646595618U;
unsigned int var_14 = 1933131510U;
unsigned int var_16 = 4049239238U;
int zero = 0;
unsigned int var_17 = 2185261565U;
unsigned int var_18 = 3693925989U;
unsigned int var_19 = 3546624823U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
