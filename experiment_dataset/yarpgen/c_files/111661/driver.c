#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)98;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
unsigned long long int var_20 = 16377878426160727213ULL;
unsigned short var_21 = (unsigned short)62946;
unsigned long long int var_22 = 12652722549029849329ULL;
unsigned int var_23 = 3752154317U;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
