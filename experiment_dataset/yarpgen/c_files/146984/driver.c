#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
short var_6 = (short)29673;
unsigned int var_7 = 2597881802U;
signed char var_12 = (signed char)-42;
unsigned short var_14 = (unsigned short)15562;
int zero = 0;
unsigned short var_20 = (unsigned short)46511;
long long int var_21 = -5560343191743641559LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 4264891337142126041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
