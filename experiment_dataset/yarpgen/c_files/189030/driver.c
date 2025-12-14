#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18109225408072110471ULL;
int var_8 = 629241856;
unsigned long long int var_10 = 9670109225502498364ULL;
int zero = 0;
unsigned int var_19 = 3730430246U;
short var_20 = (short)13333;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
