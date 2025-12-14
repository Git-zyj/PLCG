#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2563826832U;
unsigned short var_5 = (unsigned short)40375;
unsigned char var_8 = (unsigned char)219;
unsigned long long int var_11 = 2939272556851967018ULL;
_Bool var_12 = (_Bool)0;
int var_14 = 22920578;
unsigned short var_19 = (unsigned short)62663;
int zero = 0;
short var_20 = (short)-2754;
unsigned long long int var_21 = 14903634763385782898ULL;
unsigned int var_22 = 3505837253U;
void init() {
}

void checksum() {
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
