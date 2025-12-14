#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_3 = (short)30698;
unsigned int var_8 = 1873329657U;
int var_15 = -309025259;
int zero = 0;
unsigned short var_16 = (unsigned short)13485;
_Bool var_17 = (_Bool)1;
int var_18 = -1814445897;
unsigned char var_19 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
