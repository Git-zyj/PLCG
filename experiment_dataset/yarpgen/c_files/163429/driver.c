#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21347;
unsigned char var_3 = (unsigned char)180;
long long int var_8 = 927685486263856259LL;
long long int var_9 = -6696443911330248718LL;
unsigned long long int var_10 = 1819560747000512146ULL;
int zero = 0;
long long int var_11 = 7748164530977705641LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
