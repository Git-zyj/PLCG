#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2985307090U;
short var_4 = (short)16841;
unsigned char var_5 = (unsigned char)180;
signed char var_7 = (signed char)-82;
unsigned short var_9 = (unsigned short)16231;
unsigned char var_13 = (unsigned char)196;
int zero = 0;
unsigned long long int var_17 = 11458419920916693820ULL;
int var_18 = -502372311;
unsigned long long int var_19 = 3672918853596311812ULL;
signed char var_20 = (signed char)-50;
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
