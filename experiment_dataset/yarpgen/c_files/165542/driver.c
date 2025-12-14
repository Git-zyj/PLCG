#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)18;
unsigned int var_7 = 459531804U;
signed char var_9 = (signed char)65;
unsigned int var_11 = 1528474852U;
int var_15 = -1058198666;
int zero = 0;
long long int var_18 = -2525708719462971309LL;
long long int var_19 = 694692651253762792LL;
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
