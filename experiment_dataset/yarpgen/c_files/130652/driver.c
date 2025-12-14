#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15323552845927157925ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2276377671989496486ULL;
short var_8 = (short)21459;
signed char var_9 = (signed char)-102;
int zero = 0;
int var_12 = 1129223500;
int var_13 = -1041191269;
short var_14 = (short)-8468;
void init() {
}

void checksum() {
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
