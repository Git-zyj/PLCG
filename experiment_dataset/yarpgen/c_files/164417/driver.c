#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8356090957504610327ULL;
unsigned char var_6 = (unsigned char)174;
unsigned int var_12 = 1788775383U;
unsigned int var_14 = 2336097013U;
unsigned int var_15 = 1641914515U;
int zero = 0;
unsigned long long int var_18 = 4503812876833752192ULL;
short var_19 = (short)-9345;
signed char var_20 = (signed char)97;
long long int var_21 = 1669801025038219338LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
