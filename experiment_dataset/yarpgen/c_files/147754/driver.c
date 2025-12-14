#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4570930842979091060LL;
unsigned char var_6 = (unsigned char)147;
unsigned char var_7 = (unsigned char)234;
unsigned long long int var_12 = 7679486114698026584ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)95;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-51;
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
