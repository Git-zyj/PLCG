#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5897801308156324097LL;
unsigned long long int var_1 = 12206090390569969895ULL;
unsigned long long int var_9 = 789633491172009339ULL;
long long int var_12 = -3620676337974071679LL;
long long int var_14 = 3181515045508951172LL;
int zero = 0;
int var_15 = 1334953214;
short var_16 = (short)13797;
void init() {
}

void checksum() {
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
