#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1232079919536990576ULL;
signed char var_1 = (signed char)-47;
short var_3 = (short)16866;
long long int var_4 = -6158175836973420278LL;
short var_6 = (short)-22545;
short var_8 = (short)-18385;
long long int var_9 = 5816244198069483266LL;
short var_10 = (short)18160;
int zero = 0;
unsigned int var_11 = 1595199846U;
short var_12 = (short)19134;
unsigned int var_13 = 447020722U;
long long int var_14 = -1783176279777445446LL;
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
