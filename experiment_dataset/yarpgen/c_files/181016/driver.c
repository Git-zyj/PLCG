#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)36327;
short var_5 = (short)-5377;
short var_7 = (short)-14888;
signed char var_10 = (signed char)13;
unsigned int var_12 = 276163674U;
short var_13 = (short)29813;
unsigned short var_15 = (unsigned short)49488;
signed char var_17 = (signed char)-125;
unsigned char var_18 = (unsigned char)60;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1030438075;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-17787;
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
