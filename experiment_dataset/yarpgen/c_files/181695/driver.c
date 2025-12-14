#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
int var_1 = -115530806;
long long int var_2 = 5866558637087517847LL;
int var_3 = -828519906;
unsigned long long int var_4 = 17102354497296725514ULL;
unsigned long long int var_6 = 16377021971949095010ULL;
unsigned long long int var_7 = 14164306860203220484ULL;
long long int var_10 = 3215670890020070007LL;
signed char var_12 = (signed char)74;
unsigned char var_13 = (unsigned char)254;
long long int var_14 = 2721891333706066669LL;
unsigned short var_15 = (unsigned short)47372;
signed char var_16 = (signed char)-77;
int zero = 0;
unsigned short var_17 = (unsigned short)59239;
long long int var_18 = 7511057739930412629LL;
unsigned short var_19 = (unsigned short)20093;
int var_20 = -91191531;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
