#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9456461793814706797ULL;
signed char var_8 = (signed char)-71;
int zero = 0;
unsigned long long int var_12 = 5121273286933038226ULL;
unsigned long long int var_13 = 2697759646896113820ULL;
unsigned int var_14 = 2481289549U;
unsigned long long int var_15 = 4362796925967361982ULL;
unsigned int var_16 = 67065521U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
