#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16821;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7433582203272713125ULL;
short var_4 = (short)-27795;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-8287;
short var_10 = (short)-19918;
signed char var_11 = (signed char)126;
int zero = 0;
unsigned long long int var_16 = 770108116469484252ULL;
unsigned long long int var_17 = 12920412820318370119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
