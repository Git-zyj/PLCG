#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19416;
int var_5 = -941162455;
int zero = 0;
unsigned long long int var_13 = 8904365738787206010ULL;
unsigned int var_14 = 2794075944U;
unsigned int var_15 = 3766319916U;
unsigned long long int var_16 = 6421481985626398490ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
