#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2181592484U;
unsigned short var_9 = (unsigned short)54034;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11349446060904491690ULL;
long long int var_12 = -6895594808489950073LL;
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
