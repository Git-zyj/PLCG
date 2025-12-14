#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1093808238U;
signed char var_6 = (signed char)114;
unsigned char var_7 = (unsigned char)96;
unsigned int var_9 = 3106211509U;
int zero = 0;
unsigned short var_11 = (unsigned short)32560;
int var_12 = -740138997;
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
