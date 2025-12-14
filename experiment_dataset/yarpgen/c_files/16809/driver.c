#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3082399132898048991LL;
unsigned int var_4 = 1503557458U;
unsigned char var_6 = (unsigned char)236;
unsigned int var_8 = 971852424U;
unsigned char var_11 = (unsigned char)156;
long long int var_12 = 7369073183064716311LL;
int zero = 0;
signed char var_13 = (signed char)-36;
long long int var_14 = 2530022234136405373LL;
unsigned char var_15 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
