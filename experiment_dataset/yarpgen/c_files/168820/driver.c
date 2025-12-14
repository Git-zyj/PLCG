#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4182688353U;
unsigned int var_5 = 2878843329U;
unsigned char var_8 = (unsigned char)146;
int zero = 0;
unsigned long long int var_11 = 3774327826032507229ULL;
unsigned long long int var_12 = 2146101061649655717ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
