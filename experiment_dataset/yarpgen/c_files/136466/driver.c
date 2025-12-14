#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6858599336164630659LL;
unsigned int var_6 = 1207040440U;
int var_9 = -128152926;
long long int var_15 = 6729047038357742153LL;
int zero = 0;
long long int var_18 = -5315576519899167511LL;
signed char var_19 = (signed char)16;
unsigned int var_20 = 3089967159U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
