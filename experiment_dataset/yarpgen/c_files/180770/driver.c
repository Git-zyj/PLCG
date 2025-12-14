#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-28613;
signed char var_6 = (signed char)88;
short var_9 = (short)16757;
int zero = 0;
long long int var_12 = 6508308748351205114LL;
unsigned int var_13 = 3611858269U;
signed char var_14 = (signed char)121;
unsigned long long int var_15 = 1507701693981160760ULL;
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
