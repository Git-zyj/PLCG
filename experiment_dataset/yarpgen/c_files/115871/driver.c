#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1854980106U;
_Bool var_6 = (_Bool)1;
unsigned char var_14 = (unsigned char)184;
unsigned short var_19 = (unsigned short)25780;
int zero = 0;
int var_20 = -18449014;
_Bool var_21 = (_Bool)1;
int var_22 = -1622622077;
long long int var_23 = 3193584297868020681LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
