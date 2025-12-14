#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -801097762;
int var_3 = 104113635;
int var_5 = 1352793430;
int var_11 = -1600445754;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)60099;
signed char var_18 = (signed char)17;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
unsigned short var_20 = (unsigned short)10864;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
