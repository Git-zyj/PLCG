#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18368;
unsigned char var_1 = (unsigned char)35;
unsigned short var_2 = (unsigned short)56581;
unsigned short var_4 = (unsigned short)32142;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_14 = 3809302936U;
int zero = 0;
unsigned int var_16 = 549157312U;
unsigned char var_17 = (unsigned char)126;
void init() {
}

void checksum() {
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
