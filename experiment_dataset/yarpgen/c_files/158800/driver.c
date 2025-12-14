#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 940847582U;
unsigned int var_7 = 3818275710U;
short var_8 = (short)-15890;
short var_9 = (short)10313;
unsigned long long int var_10 = 3764270654782228620ULL;
short var_11 = (short)-5131;
unsigned long long int var_12 = 9114839542454301197ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)18853;
short var_15 = (short)-29840;
unsigned short var_16 = (unsigned short)63236;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
