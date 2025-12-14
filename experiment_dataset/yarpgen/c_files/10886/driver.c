#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5952936947958539345LL;
unsigned char var_2 = (unsigned char)150;
long long int var_4 = -73371291738764059LL;
signed char var_5 = (signed char)71;
unsigned short var_6 = (unsigned short)62776;
_Bool var_8 = (_Bool)1;
long long int var_12 = 1702574411799313690LL;
int zero = 0;
unsigned int var_14 = 4226812768U;
int var_15 = 1191940732;
long long int var_16 = -6363974417558494444LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
