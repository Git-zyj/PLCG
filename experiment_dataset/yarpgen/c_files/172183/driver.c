#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2849566095U;
long long int var_2 = 4953242922796473164LL;
long long int var_3 = 8500571453005153532LL;
int var_4 = 792794798;
unsigned short var_5 = (unsigned short)19729;
unsigned short var_8 = (unsigned short)42954;
unsigned char var_9 = (unsigned char)116;
unsigned long long int var_11 = 4669592712996168541ULL;
int var_13 = -1872295544;
unsigned short var_15 = (unsigned short)47727;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8064623476669881030LL;
unsigned short var_18 = (unsigned short)29217;
unsigned short var_19 = (unsigned short)1152;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
