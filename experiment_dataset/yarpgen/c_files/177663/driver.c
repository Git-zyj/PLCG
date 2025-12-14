#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10924676883446958804ULL;
int var_1 = 196313642;
int var_6 = -1150696608;
signed char var_9 = (signed char)115;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)39;
unsigned int var_14 = 2832964556U;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
unsigned char var_16 = (unsigned char)46;
int var_17 = -1616479943;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
