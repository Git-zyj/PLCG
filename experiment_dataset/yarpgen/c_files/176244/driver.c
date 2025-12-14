#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)108;
unsigned int var_7 = 2883329318U;
unsigned int var_9 = 3175532332U;
unsigned char var_13 = (unsigned char)247;
int var_16 = -1015207986;
int zero = 0;
int var_19 = 772070246;
unsigned char var_20 = (unsigned char)198;
int var_21 = -360092068;
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
