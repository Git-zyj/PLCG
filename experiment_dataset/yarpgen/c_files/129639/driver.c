#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)24;
unsigned int var_4 = 3210459330U;
short var_5 = (short)24861;
unsigned char var_6 = (unsigned char)201;
signed char var_9 = (signed char)99;
int zero = 0;
unsigned long long int var_10 = 230264885882823989ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 785024763U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
