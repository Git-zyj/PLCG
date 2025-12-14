#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
unsigned long long int var_5 = 4937113420113808256ULL;
short var_7 = (short)22073;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-21895;
short var_13 = (short)-21887;
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
