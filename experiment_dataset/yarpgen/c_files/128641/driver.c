#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2021554154672876257LL;
unsigned short var_1 = (unsigned short)40051;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)4806;
short var_11 = (short)-15540;
signed char var_12 = (signed char)-105;
int var_13 = -976440393;
long long int var_14 = -6534896674186241742LL;
unsigned short var_15 = (unsigned short)55649;
unsigned int var_17 = 4239324114U;
unsigned int var_18 = 230600782U;
int zero = 0;
unsigned long long int var_19 = 4352148855738396530ULL;
long long int var_20 = -6293214161474789207LL;
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
