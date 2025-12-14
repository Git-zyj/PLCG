#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-31973;
short var_6 = (short)29996;
unsigned int var_19 = 2967567550U;
int zero = 0;
int var_20 = 130041347;
short var_21 = (short)16042;
long long int var_22 = -3453428436728815517LL;
int var_23 = 793196671;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
