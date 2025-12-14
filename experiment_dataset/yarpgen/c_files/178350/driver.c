#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7859089794568854553LL;
unsigned int var_2 = 3446612849U;
long long int var_3 = -4711085652738686233LL;
unsigned long long int var_9 = 8545466119111780697ULL;
int zero = 0;
unsigned int var_10 = 1029809366U;
long long int var_11 = 5894103541700171567LL;
unsigned int var_12 = 1940669172U;
long long int var_13 = 1666307234208902210LL;
long long int var_14 = 113461701902387644LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
