#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 341811686U;
long long int var_2 = 2836444980328196531LL;
unsigned short var_6 = (unsigned short)40660;
unsigned int var_8 = 1658726289U;
unsigned short var_11 = (unsigned short)1096;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -7441059900746836474LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8619862605695184147LL;
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
