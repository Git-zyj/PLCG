#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58735;
unsigned int var_6 = 3965149245U;
long long int var_10 = -789699491949320409LL;
unsigned int var_14 = 3576357039U;
int zero = 0;
unsigned long long int var_20 = 10480017399155195955ULL;
unsigned long long int var_21 = 8439820548042070829ULL;
void init() {
}

void checksum() {
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
