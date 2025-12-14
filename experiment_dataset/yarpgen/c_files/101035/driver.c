#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16861229377446784201ULL;
_Bool var_2 = (_Bool)0;
long long int var_6 = -5129008368901751026LL;
unsigned long long int var_8 = 11793281748515783131ULL;
unsigned char var_10 = (unsigned char)178;
int var_18 = -2113357862;
int zero = 0;
signed char var_19 = (signed char)-37;
unsigned short var_20 = (unsigned short)15830;
void init() {
}

void checksum() {
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
