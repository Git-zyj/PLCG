#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 995907175;
unsigned int var_2 = 3453730619U;
short var_14 = (short)18927;
short var_15 = (short)12568;
int zero = 0;
short var_17 = (short)16018;
unsigned char var_18 = (unsigned char)70;
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
