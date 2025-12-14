#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 284561197U;
long long int var_11 = 3970974595906260705LL;
int zero = 0;
long long int var_14 = -2795219746035979191LL;
signed char var_15 = (signed char)116;
unsigned short var_16 = (unsigned short)61021;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
