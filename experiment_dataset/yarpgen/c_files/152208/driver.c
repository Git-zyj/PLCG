#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1626296407;
unsigned long long int var_3 = 12817930696303538998ULL;
signed char var_4 = (signed char)121;
unsigned long long int var_6 = 614136237585649897ULL;
long long int var_7 = -6265020878120327762LL;
signed char var_8 = (signed char)2;
unsigned int var_11 = 1707044269U;
int zero = 0;
unsigned int var_12 = 3222203362U;
unsigned char var_13 = (unsigned char)172;
int var_14 = -1449720603;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
