#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
unsigned long long int var_2 = 6438759194564086679ULL;
signed char var_5 = (signed char)74;
_Bool var_6 = (_Bool)1;
int var_9 = 1528226070;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)12714;
int var_12 = 1127592048;
unsigned short var_13 = (unsigned short)61096;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
