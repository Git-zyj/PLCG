#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6018699754659410389LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)16;
unsigned int var_8 = 3805446562U;
int var_11 = 1797518420;
unsigned char var_13 = (unsigned char)30;
signed char var_14 = (signed char)-38;
int var_15 = -1350755216;
int zero = 0;
signed char var_16 = (signed char)-69;
signed char var_17 = (signed char)85;
int var_18 = -222250317;
short var_19 = (short)13102;
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
