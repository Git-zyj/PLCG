#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4500861902343489780LL;
long long int var_11 = 8134631069964460742LL;
long long int var_14 = 4192765058658170101LL;
int zero = 0;
unsigned long long int var_15 = 9251612259242308354ULL;
long long int var_16 = 4812553897944796897LL;
unsigned short var_17 = (unsigned short)62650;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
