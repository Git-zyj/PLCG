#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2157809805159310290ULL;
unsigned char var_1 = (unsigned char)18;
_Bool var_3 = (_Bool)1;
int var_5 = 367686044;
unsigned char var_7 = (unsigned char)146;
int var_9 = -2107972676;
unsigned int var_12 = 2691852263U;
int zero = 0;
unsigned int var_16 = 783969814U;
unsigned int var_17 = 204394934U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
