#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47880;
unsigned int var_1 = 1043752826U;
unsigned int var_5 = 2101805188U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1250756411U;
unsigned char var_8 = (unsigned char)104;
int zero = 0;
unsigned short var_10 = (unsigned short)58286;
unsigned char var_11 = (unsigned char)83;
unsigned short var_12 = (unsigned short)35792;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
