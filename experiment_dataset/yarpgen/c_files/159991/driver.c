#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1286122497;
signed char var_1 = (signed char)105;
long long int var_2 = 714728772071643884LL;
signed char var_11 = (signed char)-108;
unsigned short var_14 = (unsigned short)36576;
unsigned long long int var_15 = 309734039113757985ULL;
int zero = 0;
unsigned int var_17 = 3442485685U;
long long int var_18 = 3747560134890094601LL;
unsigned int var_19 = 2637495140U;
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
