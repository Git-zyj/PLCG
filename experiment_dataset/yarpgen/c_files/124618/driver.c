#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 507233233;
short var_5 = (short)9502;
int var_6 = -256564085;
short var_7 = (short)-8912;
signed char var_8 = (signed char)-22;
signed char var_9 = (signed char)41;
unsigned short var_10 = (unsigned short)15874;
long long int var_11 = 3106360626268173606LL;
int var_12 = 423954975;
int zero = 0;
short var_14 = (short)20897;
int var_15 = -2111232290;
signed char var_16 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
