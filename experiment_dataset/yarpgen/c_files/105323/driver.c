#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -8032599952989054300LL;
unsigned int var_10 = 3186964450U;
unsigned int var_12 = 2534873558U;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_19 = 378971647;
unsigned int var_20 = 1686132760U;
unsigned char var_21 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
