#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1022776917;
int var_6 = -1227866398;
short var_7 = (short)-1719;
unsigned long long int var_9 = 14649643379996769244ULL;
int zero = 0;
unsigned long long int var_12 = 7599004920001275619ULL;
signed char var_13 = (signed char)10;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1586108010870736028LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
