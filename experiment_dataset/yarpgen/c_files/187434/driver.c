#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2679694225037528727LL;
unsigned short var_1 = (unsigned short)44789;
long long int var_6 = -610577017240240629LL;
int var_7 = 962384960;
unsigned int var_10 = 3011441556U;
int var_16 = -324905076;
int zero = 0;
long long int var_17 = -8417238268741566013LL;
int var_18 = -1388591543;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
