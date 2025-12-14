#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6501206014319698574ULL;
long long int var_8 = -4277629255058683463LL;
int var_12 = 946279427;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-101;
int zero = 0;
unsigned long long int var_18 = 12106061171771792713ULL;
unsigned int var_19 = 3205975018U;
unsigned long long int var_20 = 3449933385433763752ULL;
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
