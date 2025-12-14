#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7929102181889418117LL;
unsigned int var_2 = 1522477983U;
unsigned int var_3 = 1803807915U;
_Bool var_4 = (_Bool)1;
int var_9 = 1634239622;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -273507677;
signed char var_13 = (signed char)20;
unsigned long long int var_14 = 2692271453926393919ULL;
unsigned int var_15 = 2827841926U;
short var_16 = (short)-14904;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
