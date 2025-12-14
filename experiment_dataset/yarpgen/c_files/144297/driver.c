#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3239767479U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_15 = -262631846;
int zero = 0;
unsigned char var_18 = (unsigned char)143;
unsigned long long int var_19 = 16729591487852453728ULL;
unsigned short var_20 = (unsigned short)30365;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
