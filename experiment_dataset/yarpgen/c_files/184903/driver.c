#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10297899787341168818ULL;
unsigned long long int var_10 = 5779216306637688468ULL;
signed char var_13 = (signed char)120;
int zero = 0;
signed char var_15 = (signed char)-127;
long long int var_16 = -5454919096407338045LL;
long long int var_17 = 3303484084416855685LL;
unsigned long long int var_18 = 14679947215191612542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
