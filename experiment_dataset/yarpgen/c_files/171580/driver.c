#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18428566694788691139ULL;
unsigned int var_2 = 2564277740U;
unsigned long long int var_7 = 11437443324058169858ULL;
short var_11 = (short)-11743;
int zero = 0;
unsigned long long int var_14 = 3424155726783680053ULL;
unsigned char var_15 = (unsigned char)32;
void init() {
}

void checksum() {
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
