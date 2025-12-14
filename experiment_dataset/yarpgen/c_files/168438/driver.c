#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7579096239423915947ULL;
int var_2 = 1413232427;
unsigned long long int var_5 = 6253728199958023149ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)16944;
int var_8 = 652498807;
unsigned long long int var_10 = 11342311888184524367ULL;
signed char var_11 = (signed char)99;
int zero = 0;
short var_14 = (short)-6853;
unsigned int var_15 = 692896657U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
