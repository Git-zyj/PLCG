#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1932;
short var_10 = (short)14347;
unsigned int var_12 = 294590238U;
unsigned int var_15 = 2998416844U;
short var_17 = (short)-316;
unsigned int var_18 = 3698259566U;
int zero = 0;
short var_19 = (short)-19842;
short var_20 = (short)31754;
unsigned int var_21 = 3443700653U;
unsigned short var_22 = (unsigned short)35739;
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
