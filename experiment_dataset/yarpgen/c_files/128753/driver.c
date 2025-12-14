#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4187400036748140985ULL;
unsigned char var_7 = (unsigned char)180;
unsigned long long int var_10 = 11527430165352657157ULL;
unsigned long long int var_11 = 13025724128683457398ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)144;
unsigned char var_15 = (unsigned char)86;
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
