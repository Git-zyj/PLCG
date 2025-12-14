#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 772558037993397117ULL;
unsigned long long int var_5 = 2757357228237318098ULL;
long long int var_6 = -3055945803135917224LL;
short var_7 = (short)32462;
short var_10 = (short)15093;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)6486;
unsigned char var_18 = (unsigned char)203;
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
