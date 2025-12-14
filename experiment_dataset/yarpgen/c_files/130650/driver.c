#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10668415446085927684ULL;
long long int var_9 = -2916543363429716687LL;
long long int var_11 = -4137327719978120994LL;
int zero = 0;
long long int var_12 = -3530433423708745180LL;
unsigned long long int var_13 = 17024805257659250355ULL;
void init() {
}

void checksum() {
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
