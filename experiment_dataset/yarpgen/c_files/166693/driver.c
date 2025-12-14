#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2717863520U;
unsigned char var_7 = (unsigned char)2;
unsigned long long int var_9 = 11688448633935260333ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4233007542358289666LL;
unsigned char var_13 = (unsigned char)81;
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
