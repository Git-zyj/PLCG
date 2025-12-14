#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4948181214411101744LL;
long long int var_3 = -243042163663463532LL;
int var_6 = 385447670;
int var_7 = -2056995103;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)218;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = -594493724;
short var_16 = (short)-14507;
long long int var_17 = -1658267414343435022LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
