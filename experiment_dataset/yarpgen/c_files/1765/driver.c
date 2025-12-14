#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)54812;
long long int var_4 = 5262957371320985927LL;
unsigned short var_5 = (unsigned short)27157;
signed char var_7 = (signed char)-33;
unsigned short var_8 = (unsigned short)25439;
long long int var_10 = 5975519284093015747LL;
unsigned char var_11 = (unsigned char)31;
unsigned short var_12 = (unsigned short)45324;
int zero = 0;
long long int var_13 = -6066040021684674890LL;
short var_14 = (short)23108;
unsigned int var_15 = 506932585U;
unsigned long long int var_16 = 696368539826115489ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
