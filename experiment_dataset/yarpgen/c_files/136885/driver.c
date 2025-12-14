#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 352305625;
signed char var_3 = (signed char)31;
int var_4 = -559505267;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 5762847336796645174ULL;
int var_10 = -868717466;
int var_11 = -99318553;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -84058487;
signed char var_14 = (signed char)-21;
unsigned char var_15 = (unsigned char)87;
unsigned long long int var_16 = 7608395430152754965ULL;
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
