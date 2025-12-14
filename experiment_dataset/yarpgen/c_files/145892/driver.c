#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15735100855437368703ULL;
unsigned short var_4 = (unsigned short)40306;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)184;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-31163;
int zero = 0;
short var_18 = (short)-22511;
short var_19 = (short)31607;
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
