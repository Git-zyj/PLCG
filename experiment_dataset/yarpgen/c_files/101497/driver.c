#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15538;
short var_3 = (short)-8343;
unsigned long long int var_5 = 12964875995926885302ULL;
unsigned char var_7 = (unsigned char)98;
signed char var_8 = (signed char)-100;
short var_10 = (short)-13627;
unsigned int var_12 = 245426080U;
int zero = 0;
unsigned short var_14 = (unsigned short)21669;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5393139284667550128ULL;
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
