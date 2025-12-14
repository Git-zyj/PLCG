#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
unsigned long long int var_4 = 5377973773580879277ULL;
long long int var_10 = 3874138868476538693LL;
long long int var_11 = 1444107047120013824LL;
long long int var_14 = -7239291832150152985LL;
int zero = 0;
unsigned int var_16 = 3728254707U;
unsigned long long int var_17 = 3973628720596336762ULL;
long long int var_18 = 6142547957261875614LL;
short var_19 = (short)24044;
void init() {
}

void checksum() {
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
