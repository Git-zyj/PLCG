#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -944220726;
unsigned short var_3 = (unsigned short)6630;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)175;
unsigned short var_10 = (unsigned short)9467;
int zero = 0;
unsigned short var_12 = (unsigned short)9562;
unsigned char var_13 = (unsigned char)40;
unsigned short var_14 = (unsigned short)49916;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
