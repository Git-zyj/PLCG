#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
unsigned long long int var_2 = 2405972885130666933ULL;
unsigned char var_3 = (unsigned char)131;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)23;
unsigned short var_9 = (unsigned short)43613;
short var_10 = (short)-14957;
unsigned long long int var_11 = 3787383176722827847ULL;
unsigned long long int var_13 = 1368593165539800427ULL;
signed char var_14 = (signed char)58;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
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
