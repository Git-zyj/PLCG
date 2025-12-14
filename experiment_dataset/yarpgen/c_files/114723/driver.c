#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2093791057;
unsigned long long int var_1 = 14853283655592165966ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17247426498619582639ULL;
int zero = 0;
int var_19 = -598464169;
unsigned int var_20 = 1166881905U;
unsigned char var_21 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
