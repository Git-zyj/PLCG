#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31015;
unsigned char var_2 = (unsigned char)253;
long long int var_10 = 6306896079248475996LL;
unsigned int var_12 = 633163867U;
int zero = 0;
unsigned char var_16 = (unsigned char)142;
int var_17 = -1097718369;
int var_18 = 1477188485;
unsigned int var_19 = 2586344743U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
