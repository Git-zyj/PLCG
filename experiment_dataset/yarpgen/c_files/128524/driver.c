#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2976698001573610932LL;
unsigned long long int var_2 = 3124025253626451012ULL;
unsigned long long int var_3 = 477421395107978305ULL;
long long int var_6 = 3427117246679886125LL;
unsigned char var_8 = (unsigned char)111;
unsigned short var_10 = (unsigned short)30801;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
unsigned long long int var_13 = 14146900975812012415ULL;
signed char var_14 = (signed char)-47;
unsigned int var_15 = 3377733440U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
