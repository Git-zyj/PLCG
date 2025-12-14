#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2123713566U;
short var_1 = (short)-15575;
unsigned long long int var_4 = 15758450169911512408ULL;
short var_5 = (short)23290;
short var_6 = (short)-12386;
signed char var_7 = (signed char)65;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13146299834372739665ULL;
unsigned short var_12 = (unsigned short)20695;
short var_15 = (short)9912;
int zero = 0;
signed char var_17 = (signed char)108;
long long int var_18 = -8523239640377639406LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
