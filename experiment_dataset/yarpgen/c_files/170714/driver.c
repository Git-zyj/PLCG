#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21160;
short var_7 = (short)-21326;
int zero = 0;
unsigned short var_15 = (unsigned short)62815;
short var_16 = (short)-30616;
unsigned short var_17 = (unsigned short)23037;
short var_18 = (short)22896;
unsigned short var_19 = (unsigned short)15833;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
