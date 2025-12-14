#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6013;
short var_6 = (short)-12439;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)10156;
int zero = 0;
signed char var_11 = (signed char)-69;
unsigned short var_12 = (unsigned short)23532;
void init() {
}

void checksum() {
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
