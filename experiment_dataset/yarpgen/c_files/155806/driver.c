#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8961710798332129731ULL;
short var_4 = (short)17938;
short var_5 = (short)-32243;
signed char var_7 = (signed char)36;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
int var_10 = -90660192;
unsigned long long int var_11 = 14506183226912825803ULL;
_Bool var_12 = (_Bool)0;
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
