#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned char var_1 = (unsigned char)181;
unsigned short var_7 = (unsigned short)17841;
int var_8 = -2023761519;
int zero = 0;
unsigned char var_11 = (unsigned char)140;
unsigned long long int var_12 = 6585325456995418787ULL;
short var_13 = (short)9225;
_Bool var_14 = (_Bool)1;
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
