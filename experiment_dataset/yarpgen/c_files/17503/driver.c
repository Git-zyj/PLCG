#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -790151986060111631LL;
unsigned long long int var_1 = 6413360349525788318ULL;
unsigned int var_3 = 2577511960U;
unsigned int var_6 = 904731508U;
unsigned char var_11 = (unsigned char)84;
unsigned int var_12 = 407908842U;
signed char var_13 = (signed char)68;
long long int var_16 = 117622876945138488LL;
int zero = 0;
signed char var_17 = (signed char)120;
int var_18 = -303694634;
void init() {
}

void checksum() {
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
