#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24997;
unsigned long long int var_6 = 1124250729788023382ULL;
int var_11 = -663513189;
long long int var_12 = 6416643497991016800LL;
int zero = 0;
unsigned int var_17 = 1049105961U;
unsigned short var_18 = (unsigned short)8134;
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
