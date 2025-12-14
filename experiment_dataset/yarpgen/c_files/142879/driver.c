#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1082412985;
signed char var_12 = (signed char)-18;
int zero = 0;
unsigned long long int var_16 = 17335376540705868268ULL;
unsigned long long int var_17 = 14903058590521356505ULL;
short var_18 = (short)848;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
