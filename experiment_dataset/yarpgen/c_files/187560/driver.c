#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1979980626U;
unsigned long long int var_7 = 13174661860056010098ULL;
unsigned int var_9 = 438211275U;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15903427371277957944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
