#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)73;
long long int var_3 = -357601171122137613LL;
short var_5 = (short)7671;
unsigned int var_7 = 3472314734U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18243249811301804121ULL;
unsigned short var_12 = (unsigned short)3060;
int var_13 = 1158154013;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
