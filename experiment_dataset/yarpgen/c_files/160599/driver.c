#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22857;
unsigned short var_7 = (unsigned short)35806;
unsigned char var_8 = (unsigned char)198;
long long int var_10 = 7402645915105682796LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = -2777490724460067661LL;
int var_18 = 564540751;
long long int var_19 = 7242842440734348692LL;
int var_20 = -1659406245;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
