#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3744357390U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)83;
unsigned long long int var_11 = 11850049795155263010ULL;
int zero = 0;
long long int var_13 = 5643935772701251387LL;
unsigned char var_14 = (unsigned char)59;
void init() {
}

void checksum() {
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
