#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16213412324421581761ULL;
short var_2 = (short)-31377;
long long int var_3 = -1186706779998936265LL;
unsigned long long int var_6 = 1719700485070290166ULL;
unsigned int var_7 = 3790158182U;
long long int var_8 = -1041116777244946104LL;
unsigned char var_11 = (unsigned char)253;
int zero = 0;
unsigned int var_12 = 2982458536U;
unsigned long long int var_13 = 15543814586080027211ULL;
unsigned short var_14 = (unsigned short)30092;
short var_15 = (short)-11949;
unsigned long long int var_16 = 12425619415080118364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
