#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13640880882266775726ULL;
unsigned long long int var_6 = 8215785670304931073ULL;
unsigned int var_16 = 121164874U;
int zero = 0;
unsigned int var_17 = 4288003658U;
unsigned char var_18 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
