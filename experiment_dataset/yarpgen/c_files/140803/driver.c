#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -515392528;
int zero = 0;
unsigned long long int var_17 = 14359720440798353337ULL;
unsigned short var_18 = (unsigned short)6854;
unsigned char var_19 = (unsigned char)84;
unsigned char var_20 = (unsigned char)181;
unsigned long long int var_21 = 14837342729496530666ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
