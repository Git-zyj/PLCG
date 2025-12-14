#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2899793561U;
int var_2 = 1070424614;
int var_3 = 891006742;
unsigned char var_6 = (unsigned char)44;
unsigned int var_7 = 2727684701U;
unsigned char var_9 = (unsigned char)241;
unsigned long long int var_11 = 6641491057332753596ULL;
int zero = 0;
int var_17 = 1714609782;
unsigned int var_18 = 2105419966U;
long long int var_19 = -716257229832993401LL;
signed char var_20 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
