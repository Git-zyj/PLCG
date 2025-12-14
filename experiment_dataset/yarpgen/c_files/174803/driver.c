#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15942105578632353411ULL;
_Bool var_1 = (_Bool)0;
int var_2 = 1636522129;
unsigned long long int var_3 = 12335388795364116231ULL;
unsigned short var_6 = (unsigned short)47232;
long long int var_7 = 4364450771845354142LL;
unsigned char var_8 = (unsigned char)183;
int zero = 0;
int var_11 = 19312837;
unsigned int var_12 = 3710807764U;
unsigned char var_13 = (unsigned char)52;
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
