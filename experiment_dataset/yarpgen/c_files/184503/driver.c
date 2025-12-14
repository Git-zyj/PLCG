#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
signed char var_3 = (signed char)-7;
unsigned long long int var_6 = 18413251755457329527ULL;
unsigned char var_9 = (unsigned char)59;
unsigned int var_13 = 1093737324U;
int zero = 0;
unsigned short var_15 = (unsigned short)48869;
unsigned short var_16 = (unsigned short)9441;
short var_17 = (short)-12247;
unsigned char var_18 = (unsigned char)142;
short var_19 = (short)-20403;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
