#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 524981738962447493ULL;
unsigned short var_1 = (unsigned short)44343;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1000868432769220621ULL;
unsigned short var_6 = (unsigned short)2375;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4703017117980778597ULL;
int var_9 = -1942068670;
unsigned short var_10 = (unsigned short)38773;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1540779833U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)16545;
unsigned long long int var_15 = 45768827141851026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
