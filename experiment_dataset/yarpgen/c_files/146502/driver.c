#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3599229740270391215ULL;
signed char var_3 = (signed char)65;
unsigned int var_4 = 1659523932U;
unsigned int var_7 = 4127664790U;
int var_8 = 592722871;
signed char var_10 = (signed char)77;
short var_14 = (short)-26230;
unsigned int var_16 = 2476015083U;
int zero = 0;
int var_17 = 1325202782;
int var_18 = 1717964127;
unsigned int var_19 = 822228427U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
