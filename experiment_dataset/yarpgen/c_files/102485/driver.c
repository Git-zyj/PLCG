#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1964489942;
unsigned short var_1 = (unsigned short)54269;
int var_5 = -1609314355;
unsigned long long int var_6 = 8458197598870636465ULL;
int var_7 = 1280498045;
int zero = 0;
unsigned int var_10 = 1899933487U;
unsigned long long int var_11 = 10489151502197580762ULL;
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
