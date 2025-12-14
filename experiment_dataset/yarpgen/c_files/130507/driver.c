#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 218830366U;
unsigned char var_7 = (unsigned char)222;
signed char var_10 = (signed char)84;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_14 = 6049845483908226796LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)50024;
int var_17 = 1416835737;
int zero = 0;
unsigned char var_18 = (unsigned char)180;
long long int var_19 = -1745255169356149943LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
