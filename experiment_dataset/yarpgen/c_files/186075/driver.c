#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8641;
unsigned long long int var_2 = 12387233504885703319ULL;
unsigned int var_3 = 2755686072U;
unsigned long long int var_7 = 15301545710191204553ULL;
unsigned int var_8 = 2329483001U;
int var_10 = 1971454952;
unsigned long long int var_12 = 5308903077355466687ULL;
int var_13 = 1888083404;
int zero = 0;
unsigned char var_14 = (unsigned char)54;
int var_15 = -175630573;
signed char var_16 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
