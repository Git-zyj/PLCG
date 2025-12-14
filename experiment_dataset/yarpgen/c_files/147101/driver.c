#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3436256362425874851LL;
unsigned int var_3 = 2013858676U;
unsigned short var_6 = (unsigned short)46296;
unsigned long long int var_7 = 13566038358379974941ULL;
int var_8 = -371188924;
int var_11 = -1051741610;
unsigned int var_13 = 2231418923U;
int zero = 0;
unsigned int var_15 = 1508254184U;
long long int var_16 = -4482536204106768768LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
