#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)71;
signed char var_4 = (signed char)43;
unsigned short var_5 = (unsigned short)48365;
unsigned short var_11 = (unsigned short)53882;
int zero = 0;
unsigned int var_17 = 236055549U;
short var_18 = (short)-11180;
unsigned long long int var_19 = 15371462874468667919ULL;
void init() {
}

void checksum() {
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
