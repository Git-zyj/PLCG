#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned char var_2 = (unsigned char)9;
unsigned long long int var_3 = 5989949299765154195ULL;
unsigned char var_4 = (unsigned char)255;
unsigned short var_7 = (unsigned short)14898;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_14 = 3092260358045491084LL;
unsigned char var_15 = (unsigned char)250;
signed char var_16 = (signed char)127;
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
