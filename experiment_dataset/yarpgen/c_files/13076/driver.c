#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned long long int var_1 = 8286338314228200092ULL;
short var_2 = (short)685;
unsigned short var_3 = (unsigned short)1139;
int var_7 = -1950456013;
int var_11 = 1410373888;
long long int var_12 = 6723218967599696084LL;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
signed char var_15 = (signed char)34;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3186518660U;
long long int var_18 = 3885435903121826026LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
