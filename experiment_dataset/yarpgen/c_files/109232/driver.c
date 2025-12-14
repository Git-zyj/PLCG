#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1122649599U;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)14;
long long int var_11 = 2978633251894422252LL;
unsigned char var_14 = (unsigned char)218;
unsigned short var_15 = (unsigned short)32192;
signed char var_16 = (signed char)40;
int zero = 0;
unsigned char var_19 = (unsigned char)54;
unsigned char var_20 = (unsigned char)146;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
