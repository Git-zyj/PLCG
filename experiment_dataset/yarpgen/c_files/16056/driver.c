#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13246;
signed char var_8 = (signed char)-36;
short var_11 = (short)18272;
short var_17 = (short)-7867;
int zero = 0;
long long int var_18 = -6211179752545988768LL;
short var_19 = (short)-30307;
long long int var_20 = 5096228387859120365LL;
short var_21 = (short)-21159;
signed char var_22 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
