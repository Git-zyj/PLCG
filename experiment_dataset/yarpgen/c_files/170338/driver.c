#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
_Bool var_3 = (_Bool)1;
unsigned int var_10 = 1495446022U;
unsigned short var_13 = (unsigned short)59815;
unsigned short var_14 = (unsigned short)53995;
int var_19 = -1968453034;
int zero = 0;
int var_20 = -1678049042;
unsigned char var_21 = (unsigned char)236;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
