#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned char var_6 = (unsigned char)242;
int var_8 = -1965561721;
short var_10 = (short)5870;
int var_12 = -1316323386;
short var_17 = (short)-13807;
unsigned int var_18 = 3456086121U;
int zero = 0;
unsigned int var_20 = 2976814720U;
int var_21 = 2147002907;
unsigned int var_22 = 2482574992U;
unsigned int var_23 = 3273590153U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
