#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4652408861977211740LL;
short var_10 = (short)-19047;
signed char var_13 = (signed char)97;
int zero = 0;
signed char var_18 = (signed char)-94;
long long int var_19 = 5755599371339269644LL;
void init() {
}

void checksum() {
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
