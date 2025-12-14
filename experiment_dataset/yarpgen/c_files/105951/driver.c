#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4745377953919383655ULL;
unsigned int var_9 = 2142799374U;
long long int var_11 = -8871283030249871695LL;
int zero = 0;
short var_13 = (short)-27100;
signed char var_14 = (signed char)-67;
void init() {
}

void checksum() {
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
