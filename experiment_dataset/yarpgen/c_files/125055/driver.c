#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2096194405989084627LL;
unsigned long long int var_3 = 16756440908382042626ULL;
unsigned char var_5 = (unsigned char)84;
signed char var_6 = (signed char)-71;
int zero = 0;
unsigned short var_10 = (unsigned short)13273;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
