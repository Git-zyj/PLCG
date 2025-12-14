#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 315731592U;
signed char var_9 = (signed char)64;
int var_10 = 2048112347;
long long int var_12 = 5980160505053953281LL;
long long int var_13 = -6306499143014407299LL;
int zero = 0;
int var_14 = -1728177069;
unsigned int var_15 = 1664139592U;
signed char var_16 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
