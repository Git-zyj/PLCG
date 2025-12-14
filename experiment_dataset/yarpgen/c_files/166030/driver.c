#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2388357446727828417ULL;
unsigned int var_2 = 1766962332U;
unsigned short var_3 = (unsigned short)56615;
long long int var_4 = 2595041960531687649LL;
unsigned long long int var_5 = 6335125152120819763ULL;
short var_6 = (short)-24702;
unsigned long long int var_7 = 14750680948835617858ULL;
unsigned char var_9 = (unsigned char)87;
unsigned long long int var_10 = 640014992673828584ULL;
unsigned long long int var_11 = 16924180823365569334ULL;
int zero = 0;
short var_12 = (short)-24493;
unsigned long long int var_13 = 14745689800525455983ULL;
unsigned long long int var_14 = 4465376356748989526ULL;
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
