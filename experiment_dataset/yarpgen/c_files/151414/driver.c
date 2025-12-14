#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12830784115913599216ULL;
unsigned char var_4 = (unsigned char)214;
unsigned long long int var_6 = 17929977162755485407ULL;
unsigned char var_7 = (unsigned char)83;
unsigned char var_9 = (unsigned char)70;
unsigned char var_11 = (unsigned char)166;
long long int var_15 = -1639478252820010120LL;
int zero = 0;
unsigned char var_16 = (unsigned char)183;
unsigned char var_17 = (unsigned char)36;
unsigned char var_18 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
