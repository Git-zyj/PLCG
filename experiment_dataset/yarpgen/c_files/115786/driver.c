#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8802993606551845279LL;
unsigned short var_5 = (unsigned short)39847;
unsigned long long int var_6 = 5420004661088265736ULL;
unsigned short var_7 = (unsigned short)20694;
unsigned int var_8 = 997321056U;
unsigned short var_11 = (unsigned short)52320;
int zero = 0;
unsigned short var_20 = (unsigned short)14822;
short var_21 = (short)14722;
long long int var_22 = 6927806504847007821LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
