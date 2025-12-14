#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned int var_8 = 2706200630U;
unsigned char var_10 = (unsigned char)241;
unsigned int var_11 = 2687911230U;
signed char var_14 = (signed char)0;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
unsigned int var_16 = 3762905949U;
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
