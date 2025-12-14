#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)157;
unsigned int var_8 = 1927459121U;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)49824;
unsigned int var_15 = 292501453U;
void init() {
}

void checksum() {
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
