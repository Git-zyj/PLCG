#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
long long int var_13 = -5545082209882413440LL;
unsigned char var_17 = (unsigned char)27;
unsigned long long int var_18 = 6729993546404264368ULL;
unsigned int var_19 = 2633924102U;
int zero = 0;
unsigned long long int var_20 = 17980108282269113301ULL;
unsigned int var_21 = 950944298U;
unsigned int var_22 = 729027552U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
