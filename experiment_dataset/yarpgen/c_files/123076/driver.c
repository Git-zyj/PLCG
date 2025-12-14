#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1559662635;
unsigned short var_13 = (unsigned short)57479;
int zero = 0;
unsigned int var_19 = 3530979776U;
unsigned long long int var_20 = 14039198102222390722ULL;
long long int var_21 = -9184587180450808807LL;
void init() {
}

void checksum() {
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
