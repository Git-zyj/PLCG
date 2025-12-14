#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8144;
short var_4 = (short)-19262;
unsigned short var_6 = (unsigned short)22228;
short var_8 = (short)7642;
signed char var_9 = (signed char)-97;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
unsigned int var_14 = 360840099U;
short var_15 = (short)9041;
unsigned long long int var_16 = 10864992398088394002ULL;
void init() {
}

void checksum() {
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
