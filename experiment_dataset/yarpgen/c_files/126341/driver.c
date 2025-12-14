#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)181;
unsigned short var_6 = (unsigned short)50791;
short var_7 = (short)4257;
int var_8 = 183306933;
unsigned char var_9 = (unsigned char)240;
int zero = 0;
unsigned short var_10 = (unsigned short)4183;
unsigned short var_11 = (unsigned short)65419;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
