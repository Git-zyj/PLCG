#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1334308535U;
unsigned long long int var_8 = 15747581003312817198ULL;
int zero = 0;
long long int var_11 = -689377832024684625LL;
long long int var_12 = -31028851810212235LL;
short var_13 = (short)28434;
void init() {
}

void checksum() {
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
