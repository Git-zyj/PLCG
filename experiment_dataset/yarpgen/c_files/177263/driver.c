#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3166446510219675282LL;
long long int var_2 = 4234041498457723226LL;
long long int var_4 = 8598656136473977201LL;
long long int var_5 = 941701461486096457LL;
long long int var_6 = -8843126560430031833LL;
long long int var_9 = -216542562302321657LL;
int zero = 0;
long long int var_10 = 6712667824145578997LL;
long long int var_11 = -7372305135581291338LL;
long long int var_12 = -3834536047345671899LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
