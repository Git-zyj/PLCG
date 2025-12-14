#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1765172234U;
short var_5 = (short)-11293;
long long int var_6 = 5434716934270535022LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2251439468374368162ULL;
short var_12 = (short)25473;
unsigned long long int var_13 = 15544644637347620199ULL;
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
