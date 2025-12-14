#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -23600430398496272LL;
int var_3 = -816476680;
unsigned int var_10 = 3097097125U;
int zero = 0;
signed char var_15 = (signed char)-74;
unsigned long long int var_16 = 10096904797003669596ULL;
void init() {
}

void checksum() {
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
