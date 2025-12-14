#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 428936975;
int var_2 = -1334795488;
long long int var_7 = -7561900922315012715LL;
unsigned int var_9 = 3275604217U;
unsigned long long int var_11 = 14173712144549584753ULL;
unsigned int var_12 = 1995710548U;
int zero = 0;
unsigned int var_13 = 616349012U;
unsigned long long int var_14 = 17490722558844785153ULL;
void init() {
}

void checksum() {
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
