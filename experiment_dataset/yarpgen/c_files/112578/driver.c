#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned long long int var_12 = 11581163275861585638ULL;
int zero = 0;
unsigned long long int var_16 = 16502268651892556777ULL;
unsigned char var_17 = (unsigned char)42;
unsigned char var_18 = (unsigned char)77;
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
