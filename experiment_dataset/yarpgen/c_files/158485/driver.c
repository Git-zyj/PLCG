#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -155586800116884723LL;
unsigned short var_4 = (unsigned short)1229;
signed char var_8 = (signed char)99;
short var_9 = (short)14369;
int zero = 0;
signed char var_10 = (signed char)-100;
unsigned short var_11 = (unsigned short)56852;
unsigned long long int var_12 = 16985454350776963611ULL;
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
