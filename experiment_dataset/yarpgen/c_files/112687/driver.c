#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned char var_1 = (unsigned char)137;
int var_2 = -1626447526;
short var_7 = (short)20360;
unsigned char var_8 = (unsigned char)254;
long long int var_10 = -7388080788805419608LL;
short var_11 = (short)-13567;
int zero = 0;
int var_14 = 510554670;
signed char var_15 = (signed char)-66;
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
