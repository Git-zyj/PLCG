#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4774;
unsigned int var_5 = 35246210U;
unsigned short var_6 = (unsigned short)58310;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_11 = 10815194733781915196ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10502969756349591831ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)191;
short var_16 = (short)-12688;
unsigned int var_17 = 2313907250U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
