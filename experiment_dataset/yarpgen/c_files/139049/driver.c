#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2665906635U;
short var_2 = (short)4056;
unsigned int var_4 = 2299280051U;
long long int var_7 = -6035070848069008145LL;
unsigned short var_8 = (unsigned short)50773;
unsigned int var_11 = 601514631U;
int zero = 0;
unsigned int var_12 = 1411568492U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16158887749390441266ULL;
void init() {
}

void checksum() {
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
