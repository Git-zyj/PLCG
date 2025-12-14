#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10539242908231892097ULL;
int var_2 = -783795685;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3877658003U;
long long int var_10 = -1646513490956949408LL;
unsigned short var_12 = (unsigned short)41880;
int var_13 = 466806891;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
unsigned int var_15 = 112427982U;
long long int var_16 = -2152549818025779178LL;
unsigned int var_17 = 1095680711U;
void init() {
}

void checksum() {
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
