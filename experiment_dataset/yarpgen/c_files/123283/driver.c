#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4083586228U;
unsigned long long int var_3 = 18373059222555152627ULL;
unsigned short var_4 = (unsigned short)50040;
int var_5 = -842684082;
_Bool var_6 = (_Bool)1;
int var_8 = 1099551675;
unsigned char var_11 = (unsigned char)232;
int zero = 0;
short var_12 = (short)24562;
signed char var_13 = (signed char)-107;
signed char var_14 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
