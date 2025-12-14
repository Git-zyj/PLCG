#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)162;
_Bool var_12 = (_Bool)1;
long long int var_15 = -3645442419584923658LL;
int var_18 = 491735783;
int zero = 0;
unsigned int var_19 = 2621670626U;
long long int var_20 = -4193796132673002346LL;
void init() {
}

void checksum() {
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
