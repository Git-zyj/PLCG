#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1923063004U;
unsigned long long int var_2 = 17139960059146575340ULL;
signed char var_3 = (signed char)-115;
int var_5 = 249183890;
long long int var_9 = -4226251374324736577LL;
unsigned char var_13 = (unsigned char)171;
int zero = 0;
unsigned long long int var_16 = 12682713662966535185ULL;
int var_17 = -733257178;
signed char var_18 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
