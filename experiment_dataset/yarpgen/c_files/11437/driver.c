#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1243763138288543023LL;
unsigned int var_2 = 702340709U;
int var_3 = -109011943;
unsigned long long int var_7 = 12038108768569614303ULL;
int var_8 = 429452998;
int zero = 0;
signed char var_10 = (signed char)36;
long long int var_11 = -578344542393029904LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
