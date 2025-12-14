#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2356799815819001957LL;
signed char var_12 = (signed char)-81;
signed char var_18 = (signed char)38;
int zero = 0;
unsigned long long int var_20 = 946138516630417872ULL;
unsigned short var_21 = (unsigned short)22446;
unsigned char var_22 = (unsigned char)49;
signed char var_23 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
