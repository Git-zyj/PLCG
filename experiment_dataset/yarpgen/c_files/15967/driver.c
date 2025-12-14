#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8974646552769854443LL;
signed char var_3 = (signed char)115;
short var_4 = (short)9730;
long long int var_5 = -7968390206653192578LL;
unsigned long long int var_8 = 4420943587016781336ULL;
long long int var_9 = -5495741989562112314LL;
unsigned short var_11 = (unsigned short)17589;
long long int var_12 = 8448134537274893654LL;
signed char var_14 = (signed char)61;
int zero = 0;
signed char var_17 = (signed char)57;
unsigned long long int var_18 = 9521322088518535518ULL;
signed char var_19 = (signed char)-87;
signed char var_20 = (signed char)9;
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
