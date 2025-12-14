#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3738;
unsigned short var_3 = (unsigned short)34374;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = 4709666061772072950LL;
int var_11 = 1869516610;
unsigned long long int var_12 = 7412689714639032418ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
