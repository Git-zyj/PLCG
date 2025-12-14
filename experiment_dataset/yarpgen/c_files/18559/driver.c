#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 110067408941520705ULL;
_Bool var_1 = (_Bool)0;
int var_3 = -1832605291;
short var_4 = (short)12820;
short var_6 = (short)-6601;
long long int var_8 = 2956295902297880779LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 4887767739900757186ULL;
short var_14 = (short)8900;
unsigned char var_15 = (unsigned char)125;
short var_16 = (short)-30955;
int zero = 0;
int var_17 = -404356158;
short var_18 = (short)28097;
signed char var_19 = (signed char)109;
unsigned short var_20 = (unsigned short)16673;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
