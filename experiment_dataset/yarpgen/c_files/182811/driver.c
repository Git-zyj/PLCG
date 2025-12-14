#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
unsigned char var_3 = (unsigned char)241;
unsigned char var_6 = (unsigned char)164;
signed char var_8 = (signed char)117;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)125;
int zero = 0;
unsigned char var_14 = (unsigned char)198;
unsigned char var_15 = (unsigned char)73;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
