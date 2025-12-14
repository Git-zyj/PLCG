#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
short var_8 = (short)15580;
unsigned short var_12 = (unsigned short)27605;
unsigned char var_18 = (unsigned char)85;
int zero = 0;
int var_20 = 1891945815;
long long int var_21 = -8154477944453903522LL;
void init() {
}

void checksum() {
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
