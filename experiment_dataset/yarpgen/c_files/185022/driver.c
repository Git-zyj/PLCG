#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned long long int var_2 = 17017000253694516253ULL;
short var_4 = (short)13830;
int var_5 = 1927201237;
short var_8 = (short)15156;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)13459;
int zero = 0;
int var_12 = -1507401091;
signed char var_13 = (signed char)46;
int var_14 = 1566396463;
signed char var_15 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
