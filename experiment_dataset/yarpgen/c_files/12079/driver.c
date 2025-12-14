#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)148;
long long int var_6 = -590983230880567721LL;
int var_8 = -1369459417;
signed char var_9 = (signed char)8;
unsigned char var_12 = (unsigned char)39;
unsigned long long int var_13 = 16105520146778765807ULL;
short var_14 = (short)23027;
int zero = 0;
unsigned long long int var_15 = 8713313486347166901ULL;
int var_16 = 753273410;
unsigned short var_17 = (unsigned short)13916;
unsigned long long int var_18 = 6007912721754944602ULL;
unsigned short var_19 = (unsigned short)56820;
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
