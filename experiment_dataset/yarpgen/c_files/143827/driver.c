#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 554197015;
unsigned char var_1 = (unsigned char)42;
_Bool var_4 = (_Bool)1;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
unsigned int var_17 = 956132305U;
unsigned long long int var_18 = 8947043660178924115ULL;
unsigned long long int var_19 = 13908174969214997521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
