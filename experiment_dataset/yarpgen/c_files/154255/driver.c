#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9773;
short var_1 = (short)-13991;
unsigned char var_3 = (unsigned char)54;
int var_5 = 21170440;
int var_6 = 390276339;
unsigned int var_9 = 151306164U;
unsigned char var_10 = (unsigned char)247;
unsigned int var_11 = 2786894947U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)38074;
unsigned int var_17 = 3580936959U;
signed char var_18 = (signed char)76;
unsigned long long int var_19 = 1502487943600036057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
