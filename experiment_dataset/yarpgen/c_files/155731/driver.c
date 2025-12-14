#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 274229871;
unsigned char var_3 = (unsigned char)74;
short var_6 = (short)-19684;
long long int var_7 = 188817818876618292LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)21609;
unsigned long long int var_12 = 8854201393775651215ULL;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned int var_17 = 1326890618U;
signed char var_18 = (signed char)44;
void init() {
}

void checksum() {
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
