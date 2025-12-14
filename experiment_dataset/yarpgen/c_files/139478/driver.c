#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12579;
unsigned char var_4 = (unsigned char)184;
unsigned short var_6 = (unsigned short)58928;
long long int var_8 = -1861191623865118253LL;
unsigned short var_9 = (unsigned short)3571;
int zero = 0;
unsigned short var_12 = (unsigned short)20791;
unsigned short var_13 = (unsigned short)60507;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)2721;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
