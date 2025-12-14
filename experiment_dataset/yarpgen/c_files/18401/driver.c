#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
short var_3 = (short)19439;
short var_8 = (short)25760;
unsigned int var_12 = 1237681694U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 1522999543712004567ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)93;
unsigned short var_19 = (unsigned short)1698;
int var_20 = -967047061;
unsigned short var_21 = (unsigned short)56327;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
