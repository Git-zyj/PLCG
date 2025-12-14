#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -383602489;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)35931;
unsigned char var_12 = (unsigned char)100;
unsigned char var_14 = (unsigned char)135;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1589306091;
int var_19 = 1122931672;
unsigned int var_20 = 4187915443U;
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
