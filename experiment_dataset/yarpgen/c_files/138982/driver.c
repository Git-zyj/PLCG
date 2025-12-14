#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 9041103;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-33;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-4;
unsigned int var_18 = 3056606514U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)8830;
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
