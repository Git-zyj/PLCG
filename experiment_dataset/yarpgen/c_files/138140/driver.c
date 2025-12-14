#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59982;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 478554254U;
unsigned char var_4 = (unsigned char)228;
unsigned int var_8 = 1115286997U;
unsigned long long int var_12 = 456442835201863664ULL;
int var_13 = 733717386;
int zero = 0;
unsigned char var_14 = (unsigned char)38;
unsigned long long int var_15 = 2186328992109341515ULL;
unsigned char var_16 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
