#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)101;
long long int var_6 = 7244070677540497575LL;
signed char var_12 = (signed char)-43;
int var_17 = 1474440584;
int zero = 0;
signed char var_19 = (signed char)55;
unsigned char var_20 = (unsigned char)167;
long long int var_21 = 649165338716167180LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
