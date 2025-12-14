#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 637974541;
unsigned char var_5 = (unsigned char)22;
short var_6 = (short)31402;
_Bool var_8 = (_Bool)1;
long long int var_11 = -6676988060353924967LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)1905;
int zero = 0;
int var_15 = 190703604;
unsigned long long int var_16 = 1383452322955101316ULL;
unsigned char var_17 = (unsigned char)4;
signed char var_18 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
