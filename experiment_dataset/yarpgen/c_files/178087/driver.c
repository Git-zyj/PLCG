#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)79;
unsigned char var_5 = (unsigned char)34;
unsigned short var_7 = (unsigned short)31909;
unsigned long long int var_10 = 5876520694607789484ULL;
long long int var_11 = -165268020564751162LL;
int var_15 = 1842737890;
unsigned short var_16 = (unsigned short)14814;
int zero = 0;
unsigned long long int var_18 = 3037219794095212896ULL;
signed char var_19 = (signed char)116;
void init() {
}

void checksum() {
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
