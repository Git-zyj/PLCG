#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 268981051U;
long long int var_8 = 6438712913042112151LL;
int var_10 = 1928150905;
unsigned char var_11 = (unsigned char)148;
int var_12 = 1235478399;
signed char var_15 = (signed char)-22;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -882480687;
long long int var_21 = 8952392905348055469LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
