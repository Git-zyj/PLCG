#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51544;
int var_3 = 481240783;
long long int var_4 = 8643952401055048002LL;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)16380;
int zero = 0;
int var_10 = -1667790112;
signed char var_11 = (signed char)-52;
unsigned int var_12 = 360698111U;
signed char var_13 = (signed char)-59;
signed char var_14 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
