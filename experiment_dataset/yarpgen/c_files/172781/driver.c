#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8720;
unsigned short var_3 = (unsigned short)30076;
signed char var_5 = (signed char)21;
signed char var_6 = (signed char)70;
long long int var_11 = 8619849828359785948LL;
int var_12 = -2076502071;
unsigned short var_13 = (unsigned short)22334;
unsigned char var_15 = (unsigned char)214;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -790678466;
int var_19 = 84780121;
int var_20 = 1451638009;
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
