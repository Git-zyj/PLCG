#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_1 = 5829986994145207146LL;
long long int var_2 = 7245336526689414986LL;
int var_6 = 1202990898;
signed char var_7 = (signed char)5;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
signed char var_10 = (signed char)55;
signed char var_11 = (signed char)-67;
signed char var_12 = (signed char)8;
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
