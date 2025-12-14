#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13255;
unsigned long long int var_1 = 913076155341824692ULL;
int var_4 = 735025764;
short var_7 = (short)-23053;
unsigned long long int var_11 = 5249825876449127158ULL;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)22785;
int zero = 0;
int var_14 = 1595299296;
unsigned int var_15 = 1179817315U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
