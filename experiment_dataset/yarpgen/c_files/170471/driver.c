#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6830370106319672121LL;
unsigned char var_7 = (unsigned char)8;
unsigned int var_8 = 3561400081U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)15233;
unsigned short var_11 = (unsigned short)12895;
unsigned int var_13 = 3444802253U;
int zero = 0;
unsigned int var_14 = 3452307318U;
unsigned long long int var_15 = 10009189340223585742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
