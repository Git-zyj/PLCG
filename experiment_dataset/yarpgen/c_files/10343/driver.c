#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39876;
short var_1 = (short)-132;
unsigned char var_4 = (unsigned char)61;
int var_5 = 1276236168;
unsigned long long int var_6 = 5053411451542533463ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3059414489U;
long long int var_10 = 1594260828190949141LL;
long long int var_11 = -3603227808883265047LL;
int zero = 0;
long long int var_12 = -4150636765967498005LL;
long long int var_13 = 8157194054019595107LL;
unsigned short var_14 = (unsigned short)25876;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-18252;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
