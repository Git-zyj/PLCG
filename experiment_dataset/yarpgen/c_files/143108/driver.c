#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8972908490205325736LL;
unsigned long long int var_4 = 2925458272877288229ULL;
unsigned char var_9 = (unsigned char)117;
unsigned char var_13 = (unsigned char)40;
short var_14 = (short)16443;
unsigned int var_17 = 2666478666U;
unsigned char var_18 = (unsigned char)32;
int zero = 0;
signed char var_20 = (signed char)-109;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)212;
unsigned char var_23 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
