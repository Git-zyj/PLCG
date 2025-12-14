#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2494515600177242276LL;
unsigned short var_4 = (unsigned short)58698;
unsigned short var_5 = (unsigned short)42136;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2666952514U;
short var_10 = (short)-1218;
short var_12 = (short)-3964;
int zero = 0;
long long int var_14 = 5396293580768255252LL;
short var_15 = (short)29986;
int var_16 = 761138248;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-2880;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
