#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42120;
unsigned int var_5 = 4139715047U;
unsigned long long int var_6 = 4439873270865970238ULL;
unsigned long long int var_9 = 8026645458651714532ULL;
signed char var_10 = (signed char)-1;
int zero = 0;
unsigned int var_11 = 800572565U;
long long int var_12 = 4814016404162956496LL;
unsigned long long int var_13 = 6974264764279250663ULL;
unsigned int var_14 = 168607747U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
