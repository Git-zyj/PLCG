#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1977772752U;
unsigned char var_3 = (unsigned char)97;
unsigned long long int var_6 = 17229007922462307566ULL;
long long int var_7 = -4577950447429845600LL;
int var_8 = -421962693;
signed char var_9 = (signed char)-37;
unsigned char var_11 = (unsigned char)94;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)14671;
unsigned char var_14 = (unsigned char)194;
short var_15 = (short)29161;
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
