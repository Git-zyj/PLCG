#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 605735222U;
unsigned long long int var_5 = 7966360317429212567ULL;
unsigned short var_6 = (unsigned short)43063;
short var_7 = (short)16976;
unsigned int var_8 = 570290591U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 548560014;
signed char var_12 = (signed char)74;
signed char var_13 = (signed char)14;
long long int var_14 = -685434417724120143LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
