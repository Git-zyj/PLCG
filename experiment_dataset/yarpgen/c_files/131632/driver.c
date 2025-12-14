#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11568748276716348048ULL;
unsigned char var_3 = (unsigned char)45;
unsigned int var_6 = 3811035488U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 11538076123384224514ULL;
unsigned char var_13 = (unsigned char)224;
short var_14 = (short)-3752;
void init() {
}

void checksum() {
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
