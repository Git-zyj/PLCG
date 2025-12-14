#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
_Bool var_6 = (_Bool)0;
short var_12 = (short)30228;
int var_14 = 470693617;
int zero = 0;
int var_15 = 991872779;
unsigned long long int var_16 = 10871697598833402474ULL;
unsigned long long int var_17 = 15909291260970180646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
