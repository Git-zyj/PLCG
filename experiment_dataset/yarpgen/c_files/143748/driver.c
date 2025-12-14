#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16827715865974400439ULL;
unsigned long long int var_3 = 16997193981151006323ULL;
int zero = 0;
unsigned long long int var_15 = 5330742592736918071ULL;
int var_16 = -535036469;
unsigned short var_17 = (unsigned short)15122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
