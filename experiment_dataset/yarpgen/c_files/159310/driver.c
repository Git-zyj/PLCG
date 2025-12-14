#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12695419121082906490ULL;
short var_3 = (short)24112;
unsigned short var_4 = (unsigned short)42381;
short var_6 = (short)18489;
long long int var_7 = -8386180572303080302LL;
int var_9 = -2009792809;
unsigned int var_11 = 4142020317U;
int zero = 0;
int var_12 = 378563930;
unsigned long long int var_13 = 6060629521516944156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
