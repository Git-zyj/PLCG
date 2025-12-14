#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7618324497894282544LL;
int var_3 = 772463235;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-67;
_Bool var_7 = (_Bool)0;
short var_8 = (short)14831;
unsigned int var_14 = 3555226595U;
int zero = 0;
unsigned char var_15 = (unsigned char)129;
unsigned long long int var_16 = 4995970613138631785ULL;
void init() {
}

void checksum() {
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
