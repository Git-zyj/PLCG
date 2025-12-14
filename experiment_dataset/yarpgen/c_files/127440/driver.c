#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2824828074U;
unsigned short var_9 = (unsigned short)9291;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)119;
unsigned char var_18 = (unsigned char)214;
unsigned long long int var_19 = 15798763204170069186ULL;
long long int var_20 = 1566144294711030136LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
