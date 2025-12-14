#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)43;
int var_5 = -408294407;
signed char var_6 = (signed char)83;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2108934901U;
short var_12 = (short)-24490;
unsigned short var_13 = (unsigned short)39585;
signed char var_14 = (signed char)119;
int zero = 0;
unsigned long long int var_16 = 17872773370768970533ULL;
unsigned long long int var_17 = 1378802125529580841ULL;
unsigned short var_18 = (unsigned short)53159;
int var_19 = -520372738;
void init() {
}

void checksum() {
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
