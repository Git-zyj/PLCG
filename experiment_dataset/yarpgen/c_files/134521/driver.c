#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-2260;
unsigned long long int var_4 = 47929736593592854ULL;
short var_5 = (short)-11860;
int var_6 = 546853462;
unsigned char var_7 = (unsigned char)157;
unsigned long long int var_9 = 133606503205631589ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-9764;
long long int var_13 = -7358712265162883897LL;
void init() {
}

void checksum() {
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
