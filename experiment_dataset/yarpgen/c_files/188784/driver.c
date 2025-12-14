#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
long long int var_1 = 7945512261314708393LL;
unsigned char var_2 = (unsigned char)18;
signed char var_3 = (signed char)39;
signed char var_4 = (signed char)126;
unsigned char var_5 = (unsigned char)64;
signed char var_6 = (signed char)-88;
unsigned int var_10 = 2946750195U;
unsigned int var_13 = 2736300476U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15654836406890745556ULL;
signed char var_16 = (signed char)90;
void init() {
}

void checksum() {
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
