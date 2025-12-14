#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
unsigned char var_1 = (unsigned char)215;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)71;
signed char var_8 = (signed char)-84;
int zero = 0;
unsigned int var_10 = 2313489685U;
unsigned int var_11 = 3250919549U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
