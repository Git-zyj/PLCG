#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13151;
unsigned int var_4 = 3583932011U;
unsigned int var_7 = 643648948U;
signed char var_10 = (signed char)-97;
signed char var_11 = (signed char)8;
unsigned int var_12 = 1011289750U;
int zero = 0;
signed char var_14 = (signed char)50;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_16 = 4920020825582206602ULL;
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
