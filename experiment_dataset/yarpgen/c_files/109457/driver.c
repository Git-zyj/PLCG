#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)56228;
_Bool var_8 = (_Bool)1;
unsigned short var_14 = (unsigned short)37932;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)37253;
unsigned short var_19 = (unsigned short)56661;
unsigned int var_20 = 3593796771U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)28192;
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
