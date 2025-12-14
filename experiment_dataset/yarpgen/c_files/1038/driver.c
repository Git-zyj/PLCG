#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 554053458010459644LL;
unsigned long long int var_1 = 5909520436646516014ULL;
short var_2 = (short)-32317;
int var_6 = 1550036092;
unsigned short var_8 = (unsigned short)18352;
int zero = 0;
unsigned long long int var_11 = 16605954998648235086ULL;
unsigned long long int var_12 = 316220290400845243ULL;
unsigned char var_13 = (unsigned char)48;
short var_14 = (short)17816;
void init() {
}

void checksum() {
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
