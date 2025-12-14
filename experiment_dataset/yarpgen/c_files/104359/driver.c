#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8199345322226377724LL;
unsigned short var_1 = (unsigned short)30382;
unsigned int var_2 = 2536788921U;
unsigned int var_3 = 598173532U;
unsigned int var_4 = 2892197959U;
unsigned int var_8 = 587774681U;
unsigned short var_9 = (unsigned short)31818;
int zero = 0;
unsigned short var_17 = (unsigned short)655;
unsigned int var_18 = 1169474770U;
unsigned int var_19 = 2441611461U;
unsigned long long int var_20 = 18210898358588038874ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
