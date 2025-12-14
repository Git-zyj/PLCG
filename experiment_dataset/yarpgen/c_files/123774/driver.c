#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3975789164485513970LL;
long long int var_3 = -8260367151469405692LL;
unsigned short var_4 = (unsigned short)24554;
unsigned short var_6 = (unsigned short)42150;
unsigned short var_7 = (unsigned short)35103;
short var_9 = (short)20468;
long long int var_10 = -4553608418844549349LL;
int zero = 0;
short var_11 = (short)16707;
unsigned int var_12 = 1636379502U;
long long int var_13 = 2822340188023096618LL;
short var_14 = (short)-23230;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
