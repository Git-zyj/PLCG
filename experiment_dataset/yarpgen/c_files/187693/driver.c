#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)14580;
unsigned int var_3 = 2517440952U;
unsigned long long int var_6 = 2835895165226045003ULL;
signed char var_8 = (signed char)-6;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12836111882102821217ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
