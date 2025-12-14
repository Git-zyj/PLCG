#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58241;
int var_1 = -1901756529;
unsigned short var_3 = (unsigned short)44784;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)31751;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
unsigned int var_11 = 805217374U;
unsigned long long int var_12 = 8350918283742713974ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11440805504583934626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
