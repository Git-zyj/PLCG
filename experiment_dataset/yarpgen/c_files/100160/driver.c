#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8820047458647485868LL;
long long int var_3 = 2636075656260108836LL;
signed char var_4 = (signed char)86;
int var_5 = 571025462;
unsigned int var_6 = 3116142059U;
long long int var_7 = -4852689847330286031LL;
unsigned int var_8 = 2481595998U;
unsigned int var_9 = 1979744538U;
unsigned char var_10 = (unsigned char)216;
unsigned char var_11 = (unsigned char)12;
int var_12 = 1119130748;
int zero = 0;
unsigned int var_14 = 1963415083U;
int var_15 = -497527070;
unsigned char var_16 = (unsigned char)207;
short var_17 = (short)25219;
unsigned long long int var_18 = 16481289020076989980ULL;
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
