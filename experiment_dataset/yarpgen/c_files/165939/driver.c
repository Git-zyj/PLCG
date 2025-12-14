#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44886;
short var_5 = (short)-11957;
signed char var_7 = (signed char)-17;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)50291;
int zero = 0;
int var_20 = -778270271;
unsigned char var_21 = (unsigned char)216;
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
