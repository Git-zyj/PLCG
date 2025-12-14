#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = -1899984102;
int var_10 = -509359056;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int var_18 = 707663140;
int zero = 0;
unsigned short var_20 = (unsigned short)12386;
unsigned long long int var_21 = 15336371996433431372ULL;
unsigned long long int var_22 = 196987906543921837ULL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1382918760U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
