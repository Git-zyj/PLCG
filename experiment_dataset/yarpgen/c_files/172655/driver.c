#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42138;
short var_5 = (short)23456;
long long int var_9 = -5161356887555971886LL;
signed char var_16 = (signed char)89;
int zero = 0;
long long int var_19 = -6572009777479388191LL;
int var_20 = -88504638;
void init() {
}

void checksum() {
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
