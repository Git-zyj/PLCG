#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_3 = (signed char)64;
unsigned short var_6 = (unsigned short)2046;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-101;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -328403413;
_Bool var_19 = (_Bool)1;
int var_20 = -426241518;
signed char var_21 = (signed char)56;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
