#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43779;
long long int var_2 = 8065877134838924830LL;
short var_3 = (short)-9925;
unsigned char var_5 = (unsigned char)10;
unsigned short var_6 = (unsigned short)979;
unsigned long long int var_7 = 3308154377141154969ULL;
unsigned int var_13 = 2450097387U;
unsigned long long int var_14 = 10878885252307175499ULL;
int zero = 0;
long long int var_16 = 6590387695019890244LL;
unsigned short var_17 = (unsigned short)41245;
unsigned char var_18 = (unsigned char)72;
_Bool var_19 = (_Bool)1;
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
