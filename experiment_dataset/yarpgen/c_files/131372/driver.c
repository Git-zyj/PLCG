#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7556437366972919706ULL;
int var_3 = 1123736754;
unsigned long long int var_5 = 8621390262526059662ULL;
unsigned long long int var_11 = 4990728347041334577ULL;
int zero = 0;
unsigned long long int var_20 = 17090552379280837441ULL;
signed char var_21 = (signed char)112;
unsigned int var_22 = 4037904775U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
