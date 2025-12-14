#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2079726980U;
unsigned int var_6 = 3307072784U;
unsigned short var_10 = (unsigned short)7169;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_18 = 1261482792509752711LL;
short var_19 = (short)14700;
short var_20 = (short)12389;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
