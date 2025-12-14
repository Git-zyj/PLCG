#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3068830767306475396ULL;
signed char var_1 = (signed char)8;
unsigned char var_3 = (unsigned char)37;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)156;
int var_14 = 429894447;
int zero = 0;
long long int var_15 = -4266567893836185824LL;
unsigned char var_16 = (unsigned char)232;
unsigned char var_17 = (unsigned char)45;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
