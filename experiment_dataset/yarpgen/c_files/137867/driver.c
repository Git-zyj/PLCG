#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned char var_1 = (unsigned char)222;
unsigned int var_2 = 2527079647U;
unsigned long long int var_6 = 10861349057607626554ULL;
int zero = 0;
unsigned long long int var_11 = 9142500217278177239ULL;
long long int var_12 = -3489186849037112512LL;
int var_13 = -488693030;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
