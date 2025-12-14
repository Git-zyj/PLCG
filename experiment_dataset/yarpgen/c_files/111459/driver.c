#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52059;
unsigned char var_3 = (unsigned char)233;
_Bool var_10 = (_Bool)1;
long long int var_12 = -6239578984915278091LL;
unsigned short var_14 = (unsigned short)23312;
int zero = 0;
unsigned long long int var_16 = 12304181319568950938ULL;
unsigned int var_17 = 36651844U;
unsigned long long int var_18 = 11972913896945809269ULL;
unsigned short var_19 = (unsigned short)5800;
unsigned short var_20 = (unsigned short)2070;
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
