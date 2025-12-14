#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8752356221271694274LL;
unsigned long long int var_4 = 14096581988452972659ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)106;
long long int var_8 = 7530075822927473147LL;
short var_10 = (short)16614;
unsigned long long int var_12 = 11245373463119696399ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
unsigned int var_17 = 839151287U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)16853;
unsigned int var_20 = 3666177432U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
