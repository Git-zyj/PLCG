#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 981231985;
unsigned char var_4 = (unsigned char)149;
unsigned char var_7 = (unsigned char)194;
unsigned short var_8 = (unsigned short)27103;
_Bool var_11 = (_Bool)0;
long long int var_13 = -285446999702031476LL;
int zero = 0;
signed char var_14 = (signed char)-68;
unsigned long long int var_15 = 10849022229741699692ULL;
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
