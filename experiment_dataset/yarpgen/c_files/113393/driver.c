#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned long long int var_5 = 1128651324413614328ULL;
unsigned short var_8 = (unsigned short)10871;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = -1979898716;
long long int var_17 = -6609104767474969613LL;
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
