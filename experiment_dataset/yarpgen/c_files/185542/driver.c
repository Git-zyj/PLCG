#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5072;
int var_3 = 399798088;
unsigned int var_4 = 1346172142U;
unsigned char var_6 = (unsigned char)71;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1144942115U;
unsigned char var_16 = (unsigned char)80;
unsigned long long int var_17 = 5712985350872915185ULL;
unsigned int var_18 = 3724784833U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
