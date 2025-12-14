#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16634060430342212928ULL;
signed char var_2 = (signed char)-118;
signed char var_4 = (signed char)-23;
signed char var_7 = (signed char)-69;
signed char var_9 = (signed char)97;
signed char var_10 = (signed char)84;
int zero = 0;
long long int var_11 = -1619216036710849389LL;
signed char var_12 = (signed char)89;
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
