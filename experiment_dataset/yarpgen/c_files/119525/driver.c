#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5014;
long long int var_3 = -376181067249766010LL;
unsigned long long int var_4 = 7152642925302856783ULL;
unsigned char var_10 = (unsigned char)116;
unsigned long long int var_11 = 10648295316437971303ULL;
int zero = 0;
long long int var_13 = 2899487352531717593LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
