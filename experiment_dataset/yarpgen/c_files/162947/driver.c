#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1709751132199616288ULL;
unsigned long long int var_6 = 2388992273008015327ULL;
int var_7 = -1034930651;
short var_10 = (short)5031;
unsigned char var_11 = (unsigned char)211;
short var_14 = (short)-26428;
unsigned short var_15 = (unsigned short)8151;
long long int var_16 = -711465968200027994LL;
long long int var_17 = -5709032540506764369LL;
int zero = 0;
short var_18 = (short)-30523;
unsigned int var_19 = 1024476439U;
unsigned short var_20 = (unsigned short)864;
unsigned long long int var_21 = 7682865684482073718ULL;
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
