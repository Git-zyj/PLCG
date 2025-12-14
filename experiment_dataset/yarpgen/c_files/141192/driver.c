#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
unsigned char var_8 = (unsigned char)209;
unsigned int var_13 = 905937760U;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
unsigned int var_19 = 735362017U;
unsigned int var_20 = 3753971334U;
unsigned char var_21 = (unsigned char)240;
unsigned int var_22 = 4209975862U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
