#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
long long int var_4 = 2745728839839530460LL;
unsigned long long int var_7 = 17888063621178599999ULL;
unsigned int var_9 = 3999704921U;
long long int var_13 = 5221436502643229381LL;
int zero = 0;
signed char var_15 = (signed char)22;
unsigned short var_16 = (unsigned short)35078;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
