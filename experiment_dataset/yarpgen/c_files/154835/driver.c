#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -15311682;
_Bool var_7 = (_Bool)0;
int var_11 = 1974135672;
int zero = 0;
unsigned short var_12 = (unsigned short)53202;
int var_13 = -1232068060;
unsigned short var_14 = (unsigned short)26691;
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
