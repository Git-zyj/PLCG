#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1472916289744488866LL;
unsigned char var_8 = (unsigned char)143;
int zero = 0;
int var_17 = 1125441377;
long long int var_18 = 3579193709884557656LL;
signed char var_19 = (signed char)-50;
signed char var_20 = (signed char)-66;
void init() {
}

void checksum() {
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
