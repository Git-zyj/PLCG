#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
short var_2 = (short)-17621;
unsigned short var_3 = (unsigned short)25506;
signed char var_5 = (signed char)23;
unsigned long long int var_8 = 5311387041732523546ULL;
unsigned char var_14 = (unsigned char)132;
unsigned long long int var_15 = 8736891931897557476ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
unsigned long long int var_17 = 3697385134916328652ULL;
short var_18 = (short)28519;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
