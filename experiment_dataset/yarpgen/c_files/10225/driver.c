#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)75;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 3221481743796639409ULL;
int var_8 = -936113390;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
unsigned long long int var_11 = 9375094284765672876ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14557307896598003431ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
