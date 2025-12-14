#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4313261399498863937LL;
int var_1 = -358018614;
short var_3 = (short)22314;
_Bool var_6 = (_Bool)0;
short var_9 = (short)26041;
signed char var_11 = (signed char)-20;
unsigned char var_13 = (unsigned char)35;
unsigned int var_16 = 328813667U;
_Bool var_17 = (_Bool)1;
unsigned int var_19 = 2896051867U;
int zero = 0;
long long int var_20 = -2448540726093156837LL;
int var_21 = -1196550054;
void init() {
}

void checksum() {
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
