#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6543471426417277647ULL;
unsigned char var_2 = (unsigned char)84;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)60949;
unsigned short var_8 = (unsigned short)4606;
short var_9 = (short)20874;
int zero = 0;
unsigned short var_14 = (unsigned short)22852;
unsigned short var_15 = (unsigned short)33270;
signed char var_16 = (signed char)-115;
short var_17 = (short)6601;
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
