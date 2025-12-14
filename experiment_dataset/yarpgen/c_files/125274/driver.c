#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25404;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 283013319290055693ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7103752097710498273ULL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-31563;
unsigned short var_8 = (unsigned short)6179;
unsigned int var_9 = 661712823U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1054620956U;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
long long int var_13 = -8858280369553697660LL;
unsigned long long int var_14 = 2425513345725425613ULL;
unsigned char var_15 = (unsigned char)233;
unsigned int var_16 = 590416333U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
