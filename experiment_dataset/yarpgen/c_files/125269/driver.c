#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11144518803718416357ULL;
unsigned char var_5 = (unsigned char)37;
long long int var_12 = -2697204367465967843LL;
unsigned char var_13 = (unsigned char)44;
unsigned char var_14 = (unsigned char)71;
short var_15 = (short)-20476;
unsigned long long int var_16 = 9018357084748224611ULL;
int var_17 = 289109168;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
