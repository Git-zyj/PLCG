#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43341;
short var_7 = (short)10105;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 10826076185350619411ULL;
int var_12 = 2042764962;
int zero = 0;
int var_13 = 438543191;
unsigned long long int var_14 = 18073526062424559861ULL;
unsigned long long int var_15 = 17960125449380102700ULL;
signed char var_16 = (signed char)93;
long long int var_17 = 7081624153465509839LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
