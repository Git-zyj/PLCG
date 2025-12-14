#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1516680698;
unsigned int var_2 = 3579766728U;
long long int var_4 = -1617350895800331968LL;
unsigned char var_5 = (unsigned char)152;
_Bool var_8 = (_Bool)0;
unsigned long long int var_15 = 9784212430222959338ULL;
signed char var_18 = (signed char)-36;
int zero = 0;
signed char var_19 = (signed char)-71;
unsigned char var_20 = (unsigned char)232;
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
