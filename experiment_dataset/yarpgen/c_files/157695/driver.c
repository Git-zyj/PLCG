#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -17951480;
short var_10 = (short)6725;
int var_13 = 825592455;
int var_14 = -362685001;
int zero = 0;
unsigned short var_16 = (unsigned short)25645;
signed char var_17 = (signed char)117;
unsigned char var_18 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
