#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned char var_2 = (unsigned char)77;
int var_3 = 112203546;
unsigned int var_14 = 3480750230U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15315702689959427073ULL;
void init() {
}

void checksum() {
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
