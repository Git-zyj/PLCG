#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
short var_9 = (short)-13182;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)24;
short var_16 = (short)5511;
int zero = 0;
unsigned char var_17 = (unsigned char)151;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
