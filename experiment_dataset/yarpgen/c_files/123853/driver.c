#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3160;
short var_1 = (short)24564;
short var_4 = (short)31105;
signed char var_7 = (signed char)-113;
unsigned short var_8 = (unsigned short)14647;
int var_11 = 2075668153;
signed char var_12 = (signed char)-69;
int zero = 0;
unsigned long long int var_13 = 7876179288049235146ULL;
short var_14 = (short)-11836;
int var_15 = 350757515;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
