#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2033578675;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4666977826714289198ULL;
int var_6 = 231164258;
long long int var_9 = 4843123935757554429LL;
unsigned long long int var_10 = 15198399024819548928ULL;
int zero = 0;
signed char var_11 = (signed char)122;
signed char var_12 = (signed char)61;
unsigned int var_13 = 3200111519U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
