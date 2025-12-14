#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 6342488543140895785ULL;
unsigned int var_4 = 1632249908U;
long long int var_5 = -2595259273566195188LL;
unsigned char var_7 = (unsigned char)183;
short var_11 = (short)9549;
int zero = 0;
unsigned long long int var_12 = 9266589224188382722ULL;
unsigned long long int var_13 = 5296117119018010257ULL;
short var_14 = (short)27108;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
