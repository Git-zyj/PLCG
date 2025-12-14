#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)48907;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)146;
unsigned int var_6 = 4236432964U;
int var_13 = -14110137;
int var_16 = -530810248;
int var_18 = -647406724;
int zero = 0;
unsigned char var_19 = (unsigned char)64;
unsigned long long int var_20 = 11762367433727914361ULL;
unsigned short var_21 = (unsigned short)35495;
int var_22 = 872824604;
void init() {
}

void checksum() {
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
