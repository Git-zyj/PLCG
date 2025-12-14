#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-32509;
short var_8 = (short)-7530;
unsigned long long int var_10 = 7155483410586161831ULL;
long long int var_11 = -8429217031581132244LL;
int zero = 0;
unsigned char var_12 = (unsigned char)93;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-54;
long long int var_15 = 4942539574041808159LL;
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
