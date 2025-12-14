#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3108252536U;
long long int var_6 = 8927865061526728022LL;
unsigned char var_11 = (unsigned char)140;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)20;
int zero = 0;
signed char var_19 = (signed char)-88;
unsigned char var_20 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
