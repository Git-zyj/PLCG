#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)21669;
unsigned short var_2 = (unsigned short)29263;
signed char var_3 = (signed char)38;
_Bool var_4 = (_Bool)1;
short var_5 = (short)3741;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 18220101055940402318ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)18757;
short var_10 = (short)31583;
unsigned short var_11 = (unsigned short)40710;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
unsigned long long int var_13 = 2946389770581807413ULL;
signed char var_14 = (signed char)16;
unsigned long long int var_15 = 12778998450618727148ULL;
unsigned short var_16 = (unsigned short)442;
short var_17 = (short)-14172;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
