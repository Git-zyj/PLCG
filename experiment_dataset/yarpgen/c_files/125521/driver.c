#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
signed char var_3 = (signed char)-116;
short var_5 = (short)-9980;
long long int var_6 = -7097054887520606668LL;
int var_7 = -859292413;
unsigned char var_8 = (unsigned char)28;
int zero = 0;
signed char var_10 = (signed char)-67;
short var_11 = (short)17447;
int var_12 = 2062268842;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
