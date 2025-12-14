#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2839;
short var_6 = (short)20106;
int zero = 0;
unsigned short var_10 = (unsigned short)13717;
long long int var_11 = -4037419328404067146LL;
unsigned short var_12 = (unsigned short)29313;
unsigned long long int var_13 = 5634397357852166774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
