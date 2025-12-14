#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3866242902266544638LL;
long long int var_3 = 5458835967328190982LL;
int zero = 0;
short var_14 = (short)31139;
unsigned long long int var_15 = 10938350192943303035ULL;
unsigned short var_16 = (unsigned short)64051;
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
