#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3596;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 16165317523611367910ULL;
unsigned long long int var_3 = 3162774154196819112ULL;
int var_8 = -1802789967;
long long int var_11 = -7272121746007055758LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 972977876;
int var_18 = -480399826;
int var_19 = -1733278142;
void init() {
}

void checksum() {
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
