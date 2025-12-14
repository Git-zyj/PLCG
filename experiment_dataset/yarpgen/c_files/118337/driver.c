#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_7 = -3341612225659440756LL;
long long int var_8 = 134862015677655358LL;
long long int var_9 = -2800438768429433921LL;
signed char var_10 = (signed char)-10;
int zero = 0;
signed char var_12 = (signed char)-8;
unsigned int var_13 = 2766291879U;
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
