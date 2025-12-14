#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 711376454U;
long long int var_6 = 2923771107273544568LL;
int var_7 = -435552884;
unsigned int var_8 = 2360540128U;
short var_11 = (short)732;
int zero = 0;
short var_12 = (short)23977;
short var_13 = (short)32205;
int var_14 = -227512747;
void init() {
}

void checksum() {
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
