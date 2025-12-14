#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22829;
short var_5 = (short)10400;
short var_8 = (short)28077;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)119;
int var_17 = -410905643;
int zero = 0;
unsigned long long int var_18 = 3980352254148367701ULL;
int var_19 = 98075508;
unsigned long long int var_20 = 7803296965715391358ULL;
void init() {
}

void checksum() {
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
