#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 603775114U;
short var_1 = (short)-3933;
unsigned char var_3 = (unsigned char)167;
unsigned long long int var_4 = 14245336427844169000ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)176;
short var_10 = (short)-30097;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)125;
int zero = 0;
short var_18 = (short)9881;
int var_19 = 116541056;
signed char var_20 = (signed char)-41;
long long int var_21 = -3796533476054780389LL;
unsigned char var_22 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
