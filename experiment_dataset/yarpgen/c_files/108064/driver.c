#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7273117681653946895ULL;
int var_1 = -330857643;
short var_2 = (short)17993;
int var_5 = 1778126571;
unsigned int var_6 = 959909616U;
long long int var_7 = -8695688271649338673LL;
unsigned char var_9 = (unsigned char)64;
unsigned long long int var_11 = 9745365004695391225ULL;
unsigned short var_13 = (unsigned short)40958;
long long int var_15 = -648444736264192319LL;
int zero = 0;
short var_17 = (short)17854;
unsigned long long int var_18 = 3855029558634721077ULL;
unsigned long long int var_19 = 3645199941623373504ULL;
long long int var_20 = -5674363335324254980LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
