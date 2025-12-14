#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
int var_2 = 771013815;
long long int var_3 = -2988826186837416164LL;
unsigned char var_5 = (unsigned char)153;
unsigned char var_14 = (unsigned char)44;
int zero = 0;
long long int var_16 = -6352281916500038240LL;
int var_17 = -1630858877;
unsigned long long int var_18 = 16827122515869311790ULL;
int var_19 = -193756286;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
