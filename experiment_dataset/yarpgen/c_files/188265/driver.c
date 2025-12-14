#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)7634;
unsigned char var_8 = (unsigned char)8;
unsigned char var_9 = (unsigned char)222;
unsigned short var_10 = (unsigned short)32725;
int zero = 0;
int var_18 = -2141723733;
int var_19 = -618054082;
unsigned int var_20 = 920386464U;
int var_21 = 1452284030;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
