#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-96;
int var_7 = 2095944352;
signed char var_9 = (signed char)-77;
unsigned char var_10 = (unsigned char)167;
unsigned int var_13 = 3465205130U;
int zero = 0;
unsigned int var_14 = 2325740425U;
int var_15 = 1797318423;
unsigned char var_16 = (unsigned char)118;
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
