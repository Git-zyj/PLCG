#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5557368237921839168LL;
unsigned char var_2 = (unsigned char)182;
unsigned long long int var_8 = 1192558843446476136ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)13100;
unsigned int var_13 = 2319248576U;
unsigned int var_14 = 2899724251U;
unsigned short var_15 = (unsigned short)64080;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
