#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29918;
signed char var_1 = (signed char)89;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 13358491839881297623ULL;
unsigned int var_11 = 4193788539U;
int zero = 0;
unsigned long long int var_16 = 11505753781712605616ULL;
unsigned char var_17 = (unsigned char)16;
long long int var_18 = 6108093305412789269LL;
unsigned int var_19 = 2887985631U;
short var_20 = (short)22814;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
