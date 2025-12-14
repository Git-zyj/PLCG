#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5523165761608074297LL;
int var_1 = 1099816753;
unsigned long long int var_3 = 3762136882347385165ULL;
short var_4 = (short)-21074;
signed char var_5 = (signed char)-53;
unsigned int var_7 = 840569904U;
unsigned short var_8 = (unsigned short)12325;
unsigned long long int var_9 = 1120049644249825553ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)17246;
unsigned long long int var_12 = 18294621017572925025ULL;
long long int var_13 = -4689987320076629489LL;
long long int var_14 = -9209501363007535053LL;
unsigned short var_15 = (unsigned short)61267;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
