#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8642454554767695799LL;
long long int var_7 = 5114286816340511745LL;
int var_10 = -361750581;
unsigned long long int var_16 = 209360240983314657ULL;
int zero = 0;
long long int var_18 = 4224152912751934199LL;
unsigned int var_19 = 1741108032U;
signed char var_20 = (signed char)113;
void init() {
}

void checksum() {
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
