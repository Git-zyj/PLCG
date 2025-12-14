#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2068052609U;
unsigned short var_8 = (unsigned short)57549;
signed char var_10 = (signed char)24;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3341975131300438922LL;
int var_13 = -1975744593;
signed char var_14 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
