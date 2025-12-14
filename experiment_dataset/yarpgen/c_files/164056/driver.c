#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8047575444245353038LL;
unsigned long long int var_7 = 12059984818450647126ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1448863947U;
unsigned int var_12 = 2987548089U;
unsigned char var_13 = (unsigned char)173;
unsigned short var_14 = (unsigned short)56750;
unsigned int var_16 = 1632216189U;
unsigned int var_17 = 4212815646U;
int zero = 0;
unsigned long long int var_18 = 5812004518630046743ULL;
unsigned char var_19 = (unsigned char)240;
long long int var_20 = -7602900148849348492LL;
void init() {
}

void checksum() {
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
