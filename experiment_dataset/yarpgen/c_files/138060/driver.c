#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
unsigned long long int var_1 = 16033595180296464057ULL;
unsigned long long int var_4 = 13315576302118749498ULL;
int zero = 0;
signed char var_11 = (signed char)5;
int var_12 = 622897024;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
