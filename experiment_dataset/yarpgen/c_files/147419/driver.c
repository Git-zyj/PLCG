#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3513721742715743861LL;
unsigned int var_2 = 702311120U;
int var_8 = -1906966447;
int var_12 = 1287476128;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
long long int var_20 = 8964298199081713240LL;
signed char var_21 = (signed char)19;
signed char var_22 = (signed char)33;
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
