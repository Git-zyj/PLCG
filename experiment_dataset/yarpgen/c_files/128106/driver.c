#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57038;
unsigned int var_5 = 3240921233U;
unsigned long long int var_10 = 2845531292500743667ULL;
int zero = 0;
long long int var_11 = -338323892697245397LL;
unsigned int var_12 = 3069637301U;
short var_13 = (short)-21022;
void init() {
}

void checksum() {
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
