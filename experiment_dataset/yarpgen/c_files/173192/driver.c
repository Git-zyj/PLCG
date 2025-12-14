#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)134;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)8;
unsigned char var_11 = (unsigned char)16;
unsigned long long int var_14 = 11078080330142708517ULL;
int zero = 0;
long long int var_15 = -8880387795651033593LL;
unsigned short var_16 = (unsigned short)24222;
unsigned char var_17 = (unsigned char)113;
long long int var_18 = 5156041890628256119LL;
signed char var_19 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
