#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5907938021655646922ULL;
unsigned int var_2 = 3410351680U;
unsigned short var_7 = (unsigned short)18737;
unsigned char var_8 = (unsigned char)215;
int var_9 = -2137114507;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13475510571658822402ULL;
unsigned long long int var_13 = 8034849707826197622ULL;
unsigned char var_14 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
