#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4221813383U;
unsigned short var_10 = (unsigned short)62587;
unsigned short var_13 = (unsigned short)60352;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 832807707U;
int var_19 = 262909275;
int var_20 = 242553298;
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
