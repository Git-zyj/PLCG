#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18057496556952796704ULL;
unsigned int var_5 = 4191902901U;
unsigned char var_8 = (unsigned char)46;
int zero = 0;
unsigned int var_12 = 1957843855U;
long long int var_13 = -2259718265583930239LL;
unsigned char var_14 = (unsigned char)21;
signed char var_15 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
