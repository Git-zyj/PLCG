#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2147175012498494372LL;
unsigned int var_3 = 2410937895U;
unsigned char var_6 = (unsigned char)14;
unsigned long long int var_10 = 4437311114649499943ULL;
unsigned short var_15 = (unsigned short)65453;
int zero = 0;
unsigned long long int var_19 = 13346725459418282234ULL;
unsigned char var_20 = (unsigned char)208;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)75;
signed char var_23 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
