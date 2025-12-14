#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 267075497U;
signed char var_5 = (signed char)-20;
signed char var_6 = (signed char)124;
int var_9 = 1076624461;
unsigned short var_12 = (unsigned short)18290;
long long int var_14 = -3807937522250915642LL;
int zero = 0;
signed char var_16 = (signed char)-44;
unsigned int var_17 = 2133663991U;
unsigned short var_18 = (unsigned short)4241;
int var_19 = 1473576210;
long long int var_20 = 3488749966237385709LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
