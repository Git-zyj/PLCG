#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1137226700;
long long int var_7 = 5016851896473972256LL;
int var_12 = -1661426171;
unsigned short var_13 = (unsigned short)48794;
unsigned short var_16 = (unsigned short)46067;
int zero = 0;
unsigned long long int var_20 = 17153802379173214815ULL;
unsigned int var_21 = 725061536U;
signed char var_22 = (signed char)-89;
long long int var_23 = 7131258641860959006LL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
