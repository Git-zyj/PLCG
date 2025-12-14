#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1191556133;
unsigned long long int var_14 = 2724116705163939248ULL;
short var_18 = (short)24599;
int zero = 0;
unsigned long long int var_20 = 9862507656178360290ULL;
unsigned int var_21 = 1766849135U;
void init() {
}

void checksum() {
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
