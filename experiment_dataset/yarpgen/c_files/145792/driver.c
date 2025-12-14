#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3571904695181144047ULL;
short var_13 = (short)6403;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17131782546584286859ULL;
unsigned long long int var_17 = 11990013411532859376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
