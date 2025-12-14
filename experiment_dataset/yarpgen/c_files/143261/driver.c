#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 696692796;
long long int var_3 = -6686784390905658632LL;
signed char var_4 = (signed char)-126;
long long int var_5 = -5270746743687854849LL;
unsigned long long int var_6 = 7735978461230692538ULL;
signed char var_7 = (signed char)33;
long long int var_8 = -7580742890443193256LL;
unsigned int var_9 = 799297088U;
unsigned int var_11 = 2746816686U;
unsigned short var_15 = (unsigned short)52780;
unsigned char var_16 = (unsigned char)215;
unsigned char var_17 = (unsigned char)168;
int zero = 0;
long long int var_18 = 1642031154262276816LL;
signed char var_19 = (signed char)-81;
unsigned long long int var_20 = 6931840709703681710ULL;
unsigned char var_21 = (unsigned char)142;
unsigned short var_22 = (unsigned short)44061;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
