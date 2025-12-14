#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6765889611463642931LL;
unsigned short var_2 = (unsigned short)30580;
unsigned short var_3 = (unsigned short)7365;
unsigned short var_6 = (unsigned short)27997;
int var_9 = -106773500;
int zero = 0;
unsigned short var_11 = (unsigned short)61199;
signed char var_12 = (signed char)16;
void init() {
}

void checksum() {
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
