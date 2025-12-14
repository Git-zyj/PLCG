#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8908904946776197073LL;
unsigned long long int var_5 = 9543999540698404585ULL;
short var_9 = (short)17222;
signed char var_12 = (signed char)40;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1350852817;
unsigned long long int var_20 = 5253519924007785667ULL;
int var_21 = 1617624832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
