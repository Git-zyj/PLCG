#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
long long int var_5 = 6085009064974161681LL;
_Bool var_6 = (_Bool)1;
int var_7 = -1468516831;
unsigned long long int var_8 = 1044133546352506051ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)62458;
unsigned short var_13 = (unsigned short)36295;
short var_14 = (short)-27091;
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
