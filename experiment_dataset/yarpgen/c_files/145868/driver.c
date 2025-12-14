#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2396483970U;
short var_3 = (short)4889;
unsigned short var_5 = (unsigned short)26187;
int zero = 0;
unsigned short var_10 = (unsigned short)31010;
int var_11 = 208623809;
unsigned long long int var_12 = 5168080303481708315ULL;
int var_13 = -27818292;
unsigned short var_14 = (unsigned short)37576;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
