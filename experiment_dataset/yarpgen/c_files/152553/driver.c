#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16232;
unsigned char var_1 = (unsigned char)155;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5025601512917826688LL;
int var_7 = -1392750567;
unsigned char var_9 = (unsigned char)234;
unsigned int var_10 = 803377747U;
unsigned long long int var_11 = 13529770844403717671ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)181;
short var_13 = (short)-18578;
short var_14 = (short)20806;
unsigned char var_15 = (unsigned char)105;
_Bool var_16 = (_Bool)0;
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
