#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -991047679;
unsigned int var_9 = 3639882407U;
unsigned char var_10 = (unsigned char)140;
int zero = 0;
unsigned char var_11 = (unsigned char)96;
int var_12 = -795266662;
long long int var_13 = 8613118820928081283LL;
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
