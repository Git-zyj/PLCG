#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11100703532770878425ULL;
unsigned long long int var_5 = 15500242202941251995ULL;
unsigned long long int var_7 = 17610797288592987883ULL;
int var_8 = 1923082434;
int var_9 = 317904582;
unsigned long long int var_11 = 711016284246595544ULL;
unsigned short var_14 = (unsigned short)46111;
long long int var_16 = 865433156671101917LL;
int zero = 0;
long long int var_20 = -7096340394608790392LL;
unsigned int var_21 = 3915544193U;
unsigned long long int var_22 = 8305990361669717517ULL;
short var_23 = (short)15665;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
