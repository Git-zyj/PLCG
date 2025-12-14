#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)214;
unsigned long long int var_6 = 11745372805430809684ULL;
unsigned int var_10 = 2772747686U;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
signed char var_15 = (signed char)114;
unsigned char var_16 = (unsigned char)14;
signed char var_17 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
