#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3815317256288417334ULL;
unsigned long long int var_10 = 11030598909948132866ULL;
int zero = 0;
long long int var_13 = -8312470947754604105LL;
unsigned char var_14 = (unsigned char)73;
long long int var_15 = -916962067683823524LL;
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
