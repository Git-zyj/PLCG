#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2004698671U;
long long int var_1 = -8090918681844535567LL;
unsigned int var_2 = 632649541U;
long long int var_3 = -1241474608784072693LL;
long long int var_7 = -5621522777478847959LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 669766762U;
unsigned char var_14 = (unsigned char)61;
unsigned int var_15 = 2306358694U;
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
