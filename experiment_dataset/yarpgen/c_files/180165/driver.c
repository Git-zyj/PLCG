#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)11726;
unsigned char var_11 = (unsigned char)152;
unsigned int var_17 = 770625220U;
unsigned int var_19 = 1453664748U;
int zero = 0;
unsigned char var_20 = (unsigned char)175;
short var_21 = (short)32295;
unsigned short var_22 = (unsigned short)60914;
short var_23 = (short)-9303;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
