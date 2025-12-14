#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8950370229688310032ULL;
unsigned char var_10 = (unsigned char)150;
int zero = 0;
unsigned long long int var_13 = 2840754998811292084ULL;
unsigned long long int var_14 = 4447711125512207332ULL;
unsigned char var_15 = (unsigned char)174;
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
