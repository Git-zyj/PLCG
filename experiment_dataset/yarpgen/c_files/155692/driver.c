#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8938298632685402980ULL;
unsigned long long int var_5 = 9564503927701012937ULL;
int var_12 = -159302645;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)5232;
unsigned long long int var_16 = 3348446119069110660ULL;
int zero = 0;
unsigned int var_20 = 3041708080U;
unsigned long long int var_21 = 5423287638519934674ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)16203;
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
