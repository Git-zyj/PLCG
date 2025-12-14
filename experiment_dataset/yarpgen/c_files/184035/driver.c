#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 106713173;
unsigned long long int var_1 = 3053825560082374943ULL;
unsigned short var_2 = (unsigned short)48766;
short var_6 = (short)26731;
unsigned short var_8 = (unsigned short)7715;
int zero = 0;
unsigned int var_13 = 4231270311U;
unsigned int var_14 = 1336819359U;
unsigned int var_15 = 1113921083U;
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
