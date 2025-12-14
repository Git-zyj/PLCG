#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1411079795;
unsigned char var_2 = (unsigned char)0;
signed char var_3 = (signed char)-114;
unsigned short var_6 = (unsigned short)42550;
unsigned int var_7 = 1676290188U;
unsigned int var_9 = 2071047597U;
unsigned long long int var_10 = 1292828345990190966ULL;
unsigned short var_11 = (unsigned short)31191;
signed char var_12 = (signed char)-111;
int var_13 = 125715395;
unsigned short var_14 = (unsigned short)9071;
int zero = 0;
unsigned long long int var_16 = 15723447147402299327ULL;
short var_17 = (short)21768;
unsigned int var_18 = 3888441025U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
