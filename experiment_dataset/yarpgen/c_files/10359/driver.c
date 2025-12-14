#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921504840;
unsigned long long int var_2 = 11449981430484217206ULL;
long long int var_5 = -4669756578123335855LL;
unsigned char var_8 = (unsigned char)8;
short var_9 = (short)-28191;
int var_12 = -618933653;
signed char var_13 = (signed char)112;
unsigned long long int var_15 = 5673527215270566815ULL;
int zero = 0;
int var_16 = -1994181839;
signed char var_17 = (signed char)-43;
unsigned long long int var_18 = 254438543843721172ULL;
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
