#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3832974826U;
unsigned int var_5 = 780830292U;
unsigned short var_7 = (unsigned short)40026;
unsigned short var_11 = (unsigned short)13483;
long long int var_13 = 3064467501538847662LL;
int zero = 0;
unsigned short var_16 = (unsigned short)11225;
signed char var_17 = (signed char)12;
int var_18 = 1879360416;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
