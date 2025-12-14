#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6543;
unsigned long long int var_2 = 7742633983052318319ULL;
signed char var_3 = (signed char)93;
long long int var_7 = -7397667200791521182LL;
int var_11 = 2113275298;
signed char var_12 = (signed char)89;
unsigned char var_14 = (unsigned char)30;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5958359961892682689ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
