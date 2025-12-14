#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
int var_4 = 286700508;
long long int var_5 = 8146061357072861108LL;
unsigned int var_9 = 662602732U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)51070;
unsigned long long int var_13 = 17506104980651322279ULL;
unsigned int var_15 = 51890870U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)198;
unsigned char var_18 = (unsigned char)219;
unsigned short var_19 = (unsigned short)9163;
short var_20 = (short)11356;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
