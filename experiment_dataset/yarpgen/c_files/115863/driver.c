#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 275957886;
unsigned int var_2 = 375698756U;
unsigned char var_3 = (unsigned char)123;
unsigned int var_6 = 3429850698U;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)127;
signed char var_12 = (signed char)52;
signed char var_14 = (signed char)103;
short var_16 = (short)-22838;
short var_17 = (short)-24688;
int zero = 0;
unsigned int var_18 = 1319710675U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
