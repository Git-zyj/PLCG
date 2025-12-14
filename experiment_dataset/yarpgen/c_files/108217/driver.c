#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)131;
unsigned long long int var_4 = 13834244799384395214ULL;
unsigned long long int var_6 = 14443408919335343489ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3886341911U;
unsigned char var_14 = (unsigned char)96;
_Bool var_15 = (_Bool)0;
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
