#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9104220313692416047LL;
int var_4 = 459077319;
unsigned char var_8 = (unsigned char)228;
unsigned int var_9 = 4055888469U;
int zero = 0;
unsigned long long int var_11 = 13410651043757280839ULL;
unsigned long long int var_12 = 16491063395708383517ULL;
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
