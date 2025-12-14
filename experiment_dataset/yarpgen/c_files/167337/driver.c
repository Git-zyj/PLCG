#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21505;
long long int var_3 = 7714429674870790565LL;
unsigned int var_15 = 3956363014U;
unsigned int var_16 = 1004715665U;
int zero = 0;
short var_18 = (short)3981;
short var_19 = (short)30658;
unsigned int var_20 = 1917024854U;
int var_21 = -1929577467;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
