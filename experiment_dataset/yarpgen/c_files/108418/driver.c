#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 10443457;
unsigned long long int var_4 = 249336185670212554ULL;
unsigned int var_5 = 3369569985U;
unsigned short var_6 = (unsigned short)46566;
short var_8 = (short)-28078;
long long int var_11 = -5330093474982502681LL;
signed char var_15 = (signed char)113;
int zero = 0;
signed char var_17 = (signed char)-76;
unsigned int var_18 = 329408327U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
