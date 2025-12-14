#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1497409990;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_8 = -118081168;
unsigned char var_9 = (unsigned char)160;
_Bool var_12 = (_Bool)0;
long long int var_15 = -1705152455856524878LL;
signed char var_16 = (signed char)94;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-38;
int zero = 0;
unsigned char var_19 = (unsigned char)131;
unsigned char var_20 = (unsigned char)78;
unsigned char var_21 = (unsigned char)167;
int var_22 = 1066224805;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
