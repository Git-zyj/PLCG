#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2368487724504790893ULL;
long long int var_3 = -924762042406436389LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_17 = (short)-17161;
unsigned char var_18 = (unsigned char)111;
int var_19 = 85901033;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
