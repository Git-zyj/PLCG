#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46391;
unsigned long long int var_4 = 5312939301899875041ULL;
unsigned char var_7 = (unsigned char)87;
unsigned short var_8 = (unsigned short)61790;
signed char var_11 = (signed char)-79;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4304990542549963269LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
