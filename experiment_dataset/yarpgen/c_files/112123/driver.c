#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11845550835610866716ULL;
unsigned int var_3 = 1573599418U;
unsigned int var_4 = 2930509349U;
int var_5 = -1978384273;
int zero = 0;
unsigned int var_19 = 2517997245U;
unsigned long long int var_20 = 8912275556893480642ULL;
unsigned long long int var_21 = 16193821059089808637ULL;
unsigned char var_22 = (unsigned char)191;
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
