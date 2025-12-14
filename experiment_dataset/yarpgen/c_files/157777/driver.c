#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34694;
int var_1 = -956070571;
int var_2 = -1686721937;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)94;
unsigned char var_11 = (unsigned char)222;
unsigned short var_12 = (unsigned short)41565;
int var_13 = -1844609012;
signed char var_14 = (signed char)19;
unsigned char var_15 = (unsigned char)1;
int zero = 0;
int var_18 = -783687665;
int var_19 = 585714901;
unsigned char var_20 = (unsigned char)225;
unsigned int var_21 = 1742330743U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
