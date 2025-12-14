#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
unsigned long long int var_2 = 14421183055395862123ULL;
unsigned char var_3 = (unsigned char)80;
int var_6 = -1458085054;
unsigned char var_7 = (unsigned char)222;
unsigned char var_10 = (unsigned char)230;
short var_12 = (short)23168;
signed char var_13 = (signed char)-31;
int zero = 0;
unsigned short var_16 = (unsigned short)30930;
unsigned long long int var_17 = 2199145583976257968ULL;
unsigned long long int var_18 = 13517017065458189249ULL;
unsigned long long int var_19 = 12987431447478771208ULL;
signed char var_20 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
