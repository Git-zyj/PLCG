#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned char var_4 = (unsigned char)184;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2580537198U;
int var_8 = -1360569384;
int zero = 0;
unsigned short var_11 = (unsigned short)50392;
unsigned short var_12 = (unsigned short)41411;
unsigned short var_13 = (unsigned short)7961;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
