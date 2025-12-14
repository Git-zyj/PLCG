#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22345;
unsigned long long int var_1 = 3230555727854140669ULL;
int var_2 = 1377903154;
unsigned int var_4 = 2513245891U;
signed char var_5 = (signed char)46;
signed char var_8 = (signed char)13;
unsigned short var_11 = (unsigned short)48331;
unsigned long long int var_12 = 9757613170123340241ULL;
int zero = 0;
int var_13 = -1881434609;
int var_14 = 1974202899;
short var_15 = (short)16669;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
