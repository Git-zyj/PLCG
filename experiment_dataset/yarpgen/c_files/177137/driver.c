#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 211957768878614697ULL;
unsigned long long int var_3 = 3348415549264991278ULL;
unsigned char var_7 = (unsigned char)17;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16236282702365479651ULL;
long long int var_13 = 6309293637384857786LL;
unsigned long long int var_14 = 4900637320917100374ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -2089825959;
int var_21 = 944394621;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
