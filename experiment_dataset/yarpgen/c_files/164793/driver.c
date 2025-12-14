#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20126;
short var_1 = (short)31335;
short var_3 = (short)-25672;
short var_6 = (short)12208;
unsigned long long int var_10 = 15708679646797777787ULL;
signed char var_11 = (signed char)-70;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)54220;
signed char var_15 = (signed char)110;
unsigned char var_16 = (unsigned char)104;
unsigned short var_17 = (unsigned short)4067;
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
