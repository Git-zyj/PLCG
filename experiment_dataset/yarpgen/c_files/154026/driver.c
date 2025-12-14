#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)8;
signed char var_10 = (signed char)-85;
signed char var_11 = (signed char)-13;
unsigned short var_12 = (unsigned short)5973;
int zero = 0;
unsigned short var_13 = (unsigned short)15126;
unsigned long long int var_14 = 8103032137536792291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
