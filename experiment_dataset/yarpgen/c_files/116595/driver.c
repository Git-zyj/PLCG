#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 994826866;
unsigned short var_3 = (unsigned short)51519;
unsigned long long int var_4 = 311030445894728683ULL;
signed char var_5 = (signed char)31;
_Bool var_6 = (_Bool)0;
long long int var_9 = -1935534307479144880LL;
int zero = 0;
unsigned long long int var_10 = 17253375345932223976ULL;
unsigned int var_11 = 2397713628U;
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
