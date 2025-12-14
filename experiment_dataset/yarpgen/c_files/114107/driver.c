#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
unsigned char var_5 = (unsigned char)110;
unsigned char var_6 = (unsigned char)131;
short var_8 = (short)3280;
short var_9 = (short)-27073;
unsigned short var_10 = (unsigned short)21717;
int zero = 0;
unsigned char var_13 = (unsigned char)125;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
