#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1751705487;
short var_3 = (short)-15958;
unsigned int var_4 = 3406241237U;
int var_7 = -20238484;
int var_12 = -107437438;
int zero = 0;
int var_18 = -409222083;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12352923051783491859ULL;
int var_21 = 548356244;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
