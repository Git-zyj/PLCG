#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
short var_5 = (short)26911;
unsigned char var_8 = (unsigned char)255;
signed char var_13 = (signed char)-88;
int var_17 = -1655428610;
int zero = 0;
unsigned short var_19 = (unsigned short)58719;
unsigned short var_20 = (unsigned short)31141;
short var_21 = (short)11991;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
