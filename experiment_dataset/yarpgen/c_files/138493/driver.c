#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3432175881U;
long long int var_7 = 1874582259221810106LL;
long long int var_9 = -4836025244681950405LL;
unsigned long long int var_11 = 8651637933449823995ULL;
unsigned char var_15 = (unsigned char)134;
int zero = 0;
unsigned char var_17 = (unsigned char)57;
int var_18 = 1959746102;
int var_19 = 1174804286;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
