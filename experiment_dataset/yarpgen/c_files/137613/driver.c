#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7395055570638799265LL;
long long int var_12 = -7184192705704616043LL;
short var_15 = (short)-9895;
int zero = 0;
long long int var_19 = -7691627792435910757LL;
unsigned char var_20 = (unsigned char)115;
void init() {
}

void checksum() {
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
