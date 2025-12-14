#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1864;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 16943766952460919796ULL;
unsigned long long int var_7 = 1762931633633558805ULL;
unsigned char var_8 = (unsigned char)144;
signed char var_10 = (signed char)-110;
int zero = 0;
unsigned int var_11 = 1670487653U;
unsigned int var_12 = 2741140602U;
signed char var_13 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
