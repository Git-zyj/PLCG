#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8052594411170931763ULL;
unsigned long long int var_1 = 7339561491603276759ULL;
signed char var_2 = (signed char)34;
short var_5 = (short)-9147;
signed char var_8 = (signed char)22;
long long int var_12 = 4895623058296135727LL;
unsigned int var_14 = 2687077332U;
int zero = 0;
signed char var_17 = (signed char)-70;
unsigned long long int var_18 = 8087038325146560452ULL;
unsigned long long int var_19 = 3078406279058000236ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
