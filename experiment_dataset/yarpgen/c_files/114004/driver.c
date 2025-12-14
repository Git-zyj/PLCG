#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned char var_1 = (unsigned char)244;
unsigned long long int var_2 = 11903734113939185768ULL;
short var_3 = (short)-3700;
unsigned char var_4 = (unsigned char)116;
unsigned long long int var_6 = 11040971590304860660ULL;
signed char var_8 = (signed char)-90;
int zero = 0;
signed char var_12 = (signed char)66;
short var_13 = (short)-32366;
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
