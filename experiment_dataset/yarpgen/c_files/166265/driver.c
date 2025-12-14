#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -968948919;
unsigned short var_3 = (unsigned short)32487;
unsigned int var_5 = 212581165U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3371357729112645211LL;
int zero = 0;
signed char var_13 = (signed char)65;
short var_14 = (short)-22286;
int var_15 = -1334984039;
void init() {
}

void checksum() {
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
