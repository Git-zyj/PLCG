#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11148097222098343984ULL;
unsigned short var_5 = (unsigned short)15380;
unsigned char var_6 = (unsigned char)5;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 13088132511413711204ULL;
int zero = 0;
unsigned int var_14 = 4156224217U;
long long int var_15 = -2566177135090328106LL;
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
