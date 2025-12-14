#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned short var_11 = (unsigned short)29011;
unsigned int var_12 = 1916735795U;
signed char var_13 = (signed char)-82;
unsigned int var_14 = 429236572U;
int zero = 0;
unsigned int var_17 = 615420978U;
unsigned int var_18 = 2672010504U;
unsigned short var_19 = (unsigned short)57214;
unsigned int var_20 = 3144628367U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
