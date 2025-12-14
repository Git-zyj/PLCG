#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 790789565U;
unsigned long long int var_13 = 9366080777738772903ULL;
unsigned char var_14 = (unsigned char)245;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned int var_18 = 1638636428U;
short var_19 = (short)5339;
unsigned char var_20 = (unsigned char)67;
void init() {
}

void checksum() {
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
