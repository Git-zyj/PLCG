#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)234;
short var_3 = (short)27174;
short var_7 = (short)-19101;
signed char var_8 = (signed char)-45;
unsigned short var_10 = (unsigned short)60141;
int zero = 0;
unsigned char var_12 = (unsigned char)192;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3882361315U;
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
